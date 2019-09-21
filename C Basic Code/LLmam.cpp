 
#include<stdio.h>
#include<malloc.h>
 
struct node{
                int item;
                struct node *next;
};
typedef struct node link;
 
int search(link *, int);
void insert(link **,int,int);
int delete(link **,int);
link *reverse(link *);
 

int main()
{
                link *root,*root1;
                int new_info,posn,location,element,quit,newitem,pos,position;
                char c;
               
                root = NULL;
                quit = 0;
               
                do{
                    printf("Create/Quit(Cc/Ii/Dd/Ss/Rr/Qq/Pp)");
                    printf("\n Enter the choice\n");
                    scanf("%c",&c);
                    printf("%c\n",c);
                   
                    switch(c)
                    {
                                case 'c':
                                case 'C':
                                root = create();
                                printf("\n The created linked list is\n");
                                display(root);
                                break;
                                case 'I':
                                case 'i':
                                printf("Enter the element to be inserted and position\n");
                                scanf("%d%d",&newitem,&pos);
                                insert(&root,newitem,pos);
                                printf("The linked list after insertion\n");
                                display(root);
                                break;
                                case 'D':
                                case 'd':
                                printf("Enter the element to delete");
                                scanf("%d",&position);
                                delete(&root,position);
                                printf("The linked list after deletion is\n");
                                display(root);
                                break;
                                case 's':
                                case 'S':
                                printf("Enter the element to search\n");
                                scanf("%d",&element);
                                location = search(root,element);
                                printf("Location is %d\n",location);
                                break;
                                case 'R':
                                case 'r':
                                root1= reverse(root);
                                display(root1); 
                                break;
                                case 'P':
                                case 'p':
                                display(root);
                                break;
                                case 'q':
                                case 'Q':
                                                quit =1;
                                break;
                    }
                } while(!quit);
                return 0;
}
link *create()
{
                link *root,*prev,*new;
                int temp,size;
                size = sizeof(link);
                printf("\n Enter the interger of -999 to stop:\n");
                scanf("%d",&temp);
                printf("%d\n",temp);
               
                prev = root = NULL;
                while(temp!=-999){
                                new = (link *)malloc(size);
                                new->item=temp;
                                new->next = NULL;
                               
                                if(root == NULL)
                                   root = new;
                                else
                                prev->next = new;
                                prev=new;
                                scanf("%d",&temp);
                               
                }
  return root;
}
void display(link *start)
{
                printf("\nRoot->");
                while(start!=NULL)
                {
                                printf("%d->",start->item);
                                start = start->next;
                }
                printf("NULL\n\n");
}
 
link *reverse(link *start)
{
                link *current,*prev,*save;
               
                current = start;
                prev=NULL;
               
                while(current!=NULL)
                {
                                save = current->next;
                                current->next = prev;
                                prev = current;
                                current = save;
                }
                start =prev;
                printf("\n Reversed List is:\n");
                display(start);
                printf("\n\n");
                return(current);
}
 
int search(link *start,int element)
{
                int loc,i=0;
                printf("%d is the element",element);
                while(start!=NULL)
                {
                                i++;
                                if(start->item == element)
                                {
                                                loc = i;
                                }
                                else {
                                printf("location not found\n");
                                //return 0;         
                                }
                                start = start->next;
                }
return loc;
}
 
void insert(link **root,int newitem,int pos)
{
                link *new_node,*temp;
                int i;
               
                new_node = (link *)malloc(sizeof(link));
                new_node->item = newitem;
               
                if((pos ==1)||((*root)==NULL))
                {/*insert at the first position*/
                new_node->next=*root;
                *root = new_node;
                }
         else
         {
                temp = *root;
                i=2;
                while((i<pos) && (temp->next!=NULL))
                {
                                temp=temp->next;
                                ++i;
                                }
                                new_node->next=temp->next;
                                temp->next=new_node;
                }
}
 
int delete(link **start,int position)
{
                link *temp;
                int i,return_value=1;
               
                if(*start!=NULL)
                  /*The given list is not empty*/
                if(position ==1)
                   *start = (*start)->next;
                else
                {
                                temp = *start;
                                i=2;
                                while((temp->next!=NULL)&&(i<position))
                                {
                                                temp = temp->next;
                                                ++i;
                                }
                                if(temp->next!=NULL)
                                   temp->next=temp->next->next;
                                else
                                return_value = 0;
                }
                else
                return return_value;
}
 
