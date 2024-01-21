#include "stdio.h"
#include "malloc.h"
#include "assert.h"
#include "string.h"
#define MAX_STRING_NUM 20
typedef char string[MAX_STRING_NUM];
typedef struct Person
{
  int age;
    string name;
}Person;

Person* CreatPersonClass(void){
    Person* person = (Person*)malloc(sizeof(Person));
    //assert(person != NULL);
    if(person == NULL){
        printf("person null");
        returnn NULL;
    }
    return person;
}
 Person* CreatPersonClassWithArgs(const int age, const string name){
    Person* person = CreatPersonClass();
    if(person == NULL){
        printf("person null");
        returnn NULL;
    }
    person -> age = age;
    strcpy(person-> name, name);
    return person;
 }

void person_set_age(Person *pthis, const int age){
    pthis -> age = age;
}
void person_set_name(Person *pthis, const string name){
    strcpy(pthis -> name,name);
}
void person_get_age(Person *pthis, int *age){
    *age= pthis -> age;
}
void person_get_name(Person *pthis, string name){
    strcpy(name,pthis -> name);
}
void person_print_msg(Person *pthis){
    printf("the person msg is\n{age : %d, name : %s}\n",pthis->age, pthis->name);

}

int main(void){

    Person* jack = CreatPersonClassWithArgs(18,"Jack") ;
    printf("the person msg is\n{age : %d, name : %s}\n",jack->age, jack->name);
    return 0;
}
