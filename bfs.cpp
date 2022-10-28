// bfs == breadth first == upper to lower
#include<stdio.h>
#define size 100
char vertex[size], q[size],sequence_vertex[size];
int graph[size][size],count_sequence_vertex=-1,f=0,n,r=0,s;

void visit(char ch){
    count_sequence_vertex++;
    sequence_vertex[count_sequence_vertex]=ch;
}

int  is_visit(char ch){
    int i;
    for (i=0;i<=count_sequence_vertex ; i++){
       if(sequence_vertex[i]==ch)return 1;
    }
    return 0;
}

void display(){
    int i;
    for (i=0; i<=count_sequence_vertex ;i++){
        printf("%c",sequence_vertex[i]);
    }
}

void enqueue(char ch){
    int s;
    s=(r+1)%(size+1);
    if(f==s)
    return;
    else{
        q[s]=ch;
        r=s;
    }
}

char dequeue(){
    char ch;

    if(f==r)return 'p';
    else{
        f=(f+1)%(size+1);
        ch=q[f];
        q[f]=0;
        //f=s;
        return ch;
    }
}

void check_adjacency(char ch){
    int i,j,flag;
    for(i=0;i<n;i++){
        if(vertex[i]==ch){
            for(j=0;j<n;j++){
                if(graph[i][j]==1)
                {
                    flag=is_visit(vertex[j]);
                    if(flag==0)enqueue(vertex[j]);
                }
            }
        }
    }
}

void create_graph(){
    int i,j;
    for(i=0;i<26;i++){
        vertex[i]=i+'A';
    }

    printf("How many vertex?");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            graph[i][j]=0;
        }
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            printf("%c %c value is what(0/1)?",vertex[i],vertex[j]);
            scanf("%d",&graph[i][j]);
            if(graph[i][j]==1){
                graph[j][i]=graph[i][j];
            }
        }
    }
}

void BFS(){
    char ch;
    int flag;
    enqueue(vertex[0]);
    while(f!=r)
    {
        ch=dequeue();
        flag=is_visit(ch);
        if(flag==0){
            visit(ch);
            check_adjacency(ch);
        }
    }
}
int main(){
    create_graph();
    BFS();
    display();
}