# include <stdio.h>
# include <stdlib.h>

struct job{
    int salary;
    char level;
};
struct job* increasSal(struct job*);
int main(){
    struct job *ceo = (struct job *)malloc(sizeof(struct job));
    ceo ->salary = 100;
    ceo ->level =  'A';
    ceo = increasSal(ceo);
    printf("%d\n",ceo->salary);
}

struct job* increasSal(struct job* anyJob){
    anyJob ->salary += 100;
    return anyJob;
}