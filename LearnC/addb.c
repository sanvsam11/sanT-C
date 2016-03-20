#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
#define MAX_DATA 512
#define MAX_ROWS 100

struct address {
 int id;
 int set;
 char name[MAX_DATA];
 char email[MAX_DATA];
};

struct Database{
 struct address rows[MAX_ROWS];
};

void addressPrint(struct address *a){
 printf("Name:%s\tID:%d\tEmail:%s",a->name,a->id,a->email);
}

struct connection{
FILE *file;
struct Database * db; 
};
void die(char* error_message){
 if(errno)
  perror(error_message);
 else
 printf("Error:%s",error_message);
 exit(1);
}
void databaseLoad(struct connection* conn){
 int rc = fread(conn->db,sizeof(struct Database),1,conn->file);
 if(rc!=1) die("Database load failed. did someone forget to create one..?");
}
struct connection* databaseOpen(char* file,char action){
 struct connection *conn = (struct connection*) malloc(sizeof(struct connection));if(!conn) die("conn allocation error. wow .. not your fault huh.");
 conn -> db = (struct Database*)malloc(sizeof(struct Database));
 if(!conn->db) die("Db allocation failed. so sad.. :P");
 if(action =='c')
  conn->file = fopen(file,"w");
 else{
  conn->file = fopen(file,"r+");
  if(conn->file) databaseLoad(conn);
 }
if(!conn->file) die("file open failed. what did you do...?");
}
void databaseClose(struct connection* conn){
 if(conn->file) fclose(conn->file);
 if(conn->db) free(conn->db);
 free(conn);
}
void databaseWrite(struct connection *conn){
 rewind(conn->file);
 int rc = fwrite(conn->db,sizeof(struct Database),1,conn->file);
 if(rc!=1) die("write to db failed. wow.");
 rc = fflush(conn->file); 
}
void createDatabase(struct connection* conn){
 for(int i=0;i<MAX_ROWS;i++){
 struct address add = {add.id = i,add.set=0};	
 conn->db->rows[i]=add;
}
}
void databaseSet(struct connection *conn,int id,char* name, char*email){
 struct address * addp = &conn->db->rows[id];
 if(addp->set) die("you are trying to overwrite without permission. check the damn id moron");
 char* res = strncpy(*addp->name,name,MAX_DATA);
 if(!res) die("cant copy name. too bad.");
 res = strncpy(*addp->email,email,MAX_DATA);
 if(!res) die("cant copy email. too dumb maybe?");
}
void databaseGet(struct connection *conn,int id){
 struct address *addp = conn->db->rows[id];
 if(addp->set)
  addressPrint(addp);
 else die("you cant even manage a proper id.. can you.");
}
void databaseDelete(struct connection *conn,int id){
struct address addr = {.id=id,.set=0};
conn->db->rows[id] = addr;
}
void databaseList(struct connection *conn){
 for(int i=0;i<MAX_ROWS;i++){
  struct address *addp = conn->db->rows[i];
  if(addp->set) addressPrint(addp);
}
}
int main(int argc,char * argv[])
{
 if(argc<3) die("use it right dumass :/  <exec> <dbfile> <action> [action parameters]");

 char *filename = argv[1];
 char *action = argv[2][0];
 struct connection *conn = databaseOpen(filename,action);
 if(argc>3) int id = atoi(argv[3]);if(id>MAX_ROWS) die("limit the rowcount dammit");
 
 switch(action){
 case 'c':databaseCreate(conn);
          databasewrite(conn);
          break;
 case 'g':if(argc<4) die("you forgot the id moron.");
          databaseGet(conn,id);break;
 case 's':if(argc<6) die("can't add a jhon doe. try to remember next time.");
          databaseSet(conn,id,argv[4],argv[5]);
          databaseWrite(conn);
          break;
 case 'd':if(argc<4) die("for the love of god..delete WHAT?");
          databaseDelete(conn,id);
          databaseWrite(conn);
          break;
 case 'l':databaseList(conn);break;
 default: die("choose from the following cause i aint taking nothing else.\n c-create\ng-get\ns-set\nd-delete\nl-list");
}
databaseClose(conn);
return 0;
}
