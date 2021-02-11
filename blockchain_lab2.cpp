#include<iostream>
#include<stdio.h>
#include<string.h>

#ifndef ONLINE_JUDGE
#define freopen freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
#else
#define freopen //comment
#endif

int emp_id, emp_exp, emp_sal;

char exp_dep[50], exp_name[30];

int semp_dep, semp_name;

int check_id;

struct employee
{
    int exp, sal, id;
    char dep[50];
    char name[30];
    int s_dep, s_name;
    struct employee *next;

}*head, *emp;

void linked_list()
{
    head = (struct employee *)malloc(sizeof(struct employee));
    head->next = emp;
    head->id = emp_id;
    head->exp = emp_exp;
    head->sal = emp_sal;
    head->s_dep = semp_dep;
    head->s_name = semp_name;

    for(int i=0; i<(semp_name); i++)
    {
        head->name[i] = exp_name[i];
    }
   
    for(int i=0; i<(semp_dep); i++)
    {
        
        head->dep[i] = exp_dep[i];
    }


    emp =head;


}


int main()
{

    freopen
    
    while(1)
      {
        scanf("%d",&emp_id);
        
        if(emp_id ==-1)break;
        
        scanf("%s %s %d %d",exp_name, exp_dep, &emp_exp, &emp_sal);
        
        semp_name = strlen(exp_name);
        
        semp_dep = strlen(exp_dep);
        
        linked_list();
      }

    
    while(1)
    {
      printf("\n\n");
      
      printf("Enter employee id\n");
      
      scanf("%d",&check_id);
      
      head = emp;
      
      if(check_id==-1)break;
      
      while(1)
      {
        if(head->id == check_id)
        {
          printf("Employee's name: ");
          
          for(int i=0; i<head->s_name ;i++)printf("%c",head->name[i]);
          
          printf("\nEmployee's department:");
          
          for(int i=0; i<head->s_dep; i++)printf("%c",head->dep[i]);
          
          printf("\nEmployee's experience: %d",head->exp);
          
          printf("\nEmployee's salary: %d", head->sal);
          
          break;
        }
        
        head=head->next;
      }

     }
    
    return 0;
}



