#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
FILE *fp;
void menu();

struct grid{
int node;
int flag;
int x1,y1,x2,y2;
struct grid *up,*down,*next;}*temp,*save,*ptr1,*ptr2,*start=NULL,*end;
int v[1000],z=0;
void randy()
{
    int o=0,fit;
     while(o<1000)
    {
        fit=rand()%7;
        if(fit!=0)
        {
        v[o]=fit;
        o++;}
    }

}



void snadder()
{
    temp=start;
    while(temp!=NULL)
    {
        if(temp->node==1)
        save=temp;
        if(temp->node==38)
         save->up=temp;
        temp=temp->next;
    }//#1 la

    temp=start;
    while(temp!=NULL)
    {
        if(temp->node==4)
        save=temp;
        if(temp->node==14)
         save->up=temp;
        temp=temp->next;
    }//#2 la
    temp=start;
    while(temp!=NULL)
    {
        if(temp->node==9)
        save=temp;
        if(temp->node==31)
         save->up=temp;
        temp=temp->next;
    }//#3 la
    temp=start;
    while(temp!=NULL)
    {
        if(temp->node==21)
        save=temp;
        if(temp->node==42)
         save->up=temp;
        temp=temp->next;
    }//#4 la
    temp=start;
    while(temp!=NULL)
    {
        if(temp->node==28)
        save=temp;
        if(temp->node==84)
         save->up=temp;
        temp=temp->next;

    }//#5 la
    temp=start;
    while(temp!=NULL)
    {
        if(temp->node==51)
        save=temp;
        if(temp->node==67)
         save->up=temp;
        temp=temp->next;
    }//#6 la
    temp=start;
    while(temp!=NULL)
    {
        if(temp->node==71)
        save=temp;
        if(temp->node==91)
         save->up=temp;
        temp=temp->next;
    }//#7 la
    temp=start;
    while(temp!=NULL)
    {
        if(temp->node==80)
        save=temp;
        if(temp->node==100)
         save->up=temp;
        temp=temp->next;
    }//#8 la
    //***ladder done***
    temp=start;
    while(temp!=NULL)
    {
        if(temp->node==7)
        save=temp;
        if(temp->node==17)
         temp->down=save;
        temp=temp->next;
    }//#1 sn
    temp=start;
    while(temp!=NULL)
    {
        if(temp->node==34)
        save=temp;
        if(temp->node==54)
         temp->down=save;
        temp=temp->next;
    }//#2 sn
    temp=start;
    while(temp!=NULL)
    {
        if(temp->node==19)
        save=temp;
        if(temp->node==62)
        temp->down=save;
        temp=temp->next;
    }//#3 sn
    temp=start;
    while(temp!=NULL)
    {
        if(temp->node==60)
        save=temp;
        if(temp->node==64)
        temp->down=save;
        temp=temp->next;
    }//#4 sn
    temp=start;
    while(temp!=NULL)
    {
        if(temp->node==24)
        save=temp;
        if(temp->node==87)
        temp->down=save;
        temp=temp->next;
    }//#5 sn
    temp=start;
    while(temp!=NULL)
    {
        if(temp->node==73)
        save=temp;
        if(temp->node==93)
        temp->down=save;
        temp=temp->next;
    }//#6 sn
    temp=start;
    while(temp!=NULL)
    {
        if(temp->node==75)
        save=temp;
        if(temp->node==95)
        temp->down=save;
        temp=temp->next;
    }//#7 sn
    temp=start;
    while(temp!=NULL)
    {
        if(temp->node==79)
        save=temp;
        if(temp->node==98)
        temp->down=save;
        temp=temp->next;
    }//#8 sn
    //***snakes done***
}//add snakes and ladders

void create()
{
    int i;
    for(i=0;i<100;i++)
    {

        temp=(struct grid *)malloc(sizeof(struct grid));
        temp->next=NULL;
        temp->node=i+1;//node no
        if((i+1)==100)//flag
        {temp->flag=1;
        }
        else
            temp->flag=0;
        if((i+1)==1)//coor begin
        {
            temp->x1=10;
            temp->y1=560;
            temp->x2=30;
            temp->y2=600;

        }
        else
           {
            if(((i+1)>=1&&(i+1)<=10)||((i+1)>=21&&(i+1)<=30)||((i+1)>=41&&(i+1)<=50)||((i+1)>=61&&(i+1)<=70)||((i+1)>=81&&(i+1)<=90))
            {
                  if((i)%10==0&&(i)!=0)
                  {
                    temp->x1=end->x1;
                    temp->y1=end->y1-60;
                    temp->x2=end->x2;
                    temp->y2=end->y2-60;

                  }
                  else{
                temp->x1=end->x1+60;
                temp->y1=end->y1;
                temp->x2=end->x2+60;
                temp->y2=end->y2;}

            }
            if(((i+1)>=11&&(i+1)<=20)||((i+1)>=31&&(i+1)<=40)||((i+1)>=51&&(i+1)<=60)||((i+1)>=71&&(i+1)<=80)||((i+1)>=91&&(i+1)<=100))
            {
                if((i)%10==0&&(i)!=0)
                  {
                    temp->x1=end->x1;
                    temp->y1=end->y1-60;
                    temp->x2=end->x2;
                    temp->y2=end->y2-60;

                  }
                  else{
                temp->x1=end->x1-60;
                temp->y1=end->y1;
                temp->x2=end->x2-60;
                temp->y2=end->y2;}

        }
    }//coor end :)
     if(i==0)
     {
         start=temp; end=temp;
     }
     else
     {
         end->next=temp; end=temp;
     }

    }

}


  /*void check()
{
int gd=0,gm=0;
initgraph(&gm,&gd,"");
initwindow(1000,610);
readimagefile("24ladder.bmp",0,0,610,610);
readimagefile("score.bmp",610,0,1000,80);
//readimagefile("red.bmp",10,20,30,60);
//readimagefile("blue.bmp",90,560,110,600);
//dice();
}*/
int dice()
{
    int ch;
   l:
       ch=getch();

   if(ch==32)
   {



    switch(v[z])
    {case 1:readimagefile("1.bmp",775,380,855,455);
   // readimagefile("red.bmp",10,560,30,600);


     break;
     case 2:readimagefile("2.bmp",775,380,855,455);
     //readimagefile("red.bmp",10,560,30,600);


     break;
     case 3:readimagefile("3.bmp",775,380,855,455);
     //readimagefile("red.bmp",10,560,30,600);


     break;
     case 4:readimagefile("4.bmp",775,380,855,455);
    // readimagefile("red.bmp",10,560,30,600);


     break;
     case 5:readimagefile("5.bmp",775,380,855,455);
    // readimagefile("red.bmp",10,560,30,600);


     break;
     case 6:readimagefile("6.bmp",775,380,855,455);
    // readimagefile("red.bmp",10,560,30,600);


     break;
     //default:exit(0);
    }
    delay(1200);
      setfillstyle(1,0);
    bar(775,380,860,460);
    return(v[z]);
   }
   else if(ch==27)
   {

       return(-1);
   }

   else
    goto l;



}



//ptr1=ptr2=NULL;

void exec()
{

    int gd=0,gm=0;
    initgraph(&gm,&gd,"");
    initwindow(1000,610);
    //FILE *fp;
    int move,loop,turn=1,sw=0;
    char msg[128];

    readimagefile("24ladder.bmp",0,0,610,610);
    readimagefile("score.bmp",610,0,1000,80);
    settextstyle(3,0,4);
    outtextxy(650,200,"Player1");
    outtextxy(650,250,"Player2");
    outtextxy(650,120,"Player1's Turn ");


    //create();
    randy();

    //snadder();




     //readimagefile("blue.bmp",300,300,360,360);


   //int loop,turn=1,sw=0;

  // ptr1=ptr2=NULL;


if(ptr1!=NULL||ptr2!=NULL)
{
    readimagefile("red.bmp",ptr1->x1,ptr1->y1,ptr1->x2,ptr1->y2);
    readimagefile("blue.bmp",ptr2->x1,ptr2->y1,ptr2->x2,ptr2->y2);
    sprintf(msg, "%d", ptr1->node);
            outtextxy(850,200,msg);
    sprintf(msg, "%d", ptr2->node);
            outtextxy(850,250,msg);

}

  do
  {


       if(turn%2==0)
       {outtextxy(650,120,"Player2's Turn ");}
       else
        {outtextxy(650,120,"Player1's Turn ");}

  q:  move=dice();

   if(move!=-1)

   {

    switch(turn%2)
   {
    case 1:
        {


            //outtextxy(650,120,"Player2's Turn ");

        for(loop=0;loop<move;loop++)
		    {

            if(loop==0 && ptr1==NULL)

            {
                ptr1=start;

            }



                else
               {
                   if(ptr1->node>94)
                  {
                    if(sw==0 && ((100-ptr1->node)<move))
                    { ++turn;
                      goto q;
                    }


                  }

                   ptr1=ptr1->next;
                   sw=1;





               }
                //readimagefile("blue.bmp",ptr2->x1,ptr2->y1,ptr2->x2,ptr2->y2);
                //readimagefile("24ladder.bmp",0,0,610,610);



                    delay(250);
                 readimagefile("24ladder.bmp",0,0,610,610);


                    if(ptr2!=NULL)
                    readimagefile("blue.bmp",ptr2->x1,ptr2->y1,ptr2->x2,ptr2->y2);
                        //add img;


                         readimagefile("red.bmp",ptr1->x1,ptr1->y1,ptr1->x2,ptr1->y2);









   }





   if(ptr1->up!=NULL)
		      {
		          ptr1=ptr1->up;
		           delay(250);
                 readimagefile("24ladder.bmp",0,0,610,610);


                    if(ptr2!=NULL)
                    readimagefile("blue.bmp",ptr2->x1,ptr2->y1,ptr2->x2,ptr2->y2);
                        //add img;


                         readimagefile("red.bmp",ptr1->x1,ptr1->y1,ptr1->x2,ptr1->y2);


		      }
		      else if(ptr1->down!=NULL)
              {

                ptr1=ptr1->down;
                 delay(250);
                 readimagefile("24ladder.bmp",0,0,610,610);


                    if(ptr2!=NULL)
                    readimagefile("blue.bmp",ptr2->x1,ptr2->y1,ptr2->x2,ptr2->y2);
                        //add img;


                         readimagefile("red.bmp",ptr1->x1,ptr1->y1,ptr1->x2,ptr1->y2);
              }


              /*for(loop=0;loop<move;loop++)
              {


              }*/


            sprintf(msg, "%d", ptr1->node);
            outtextxy(850,200,msg);


            if(ptr1->flag==1)
                {
                    outtextxy(700,150,"Pl.1 wins");
                    delay(2000);
                    menu();
                }


		    break;}


	case 0:
    {



            //outtextxy(650,120,"Player1's Turn ");



	    for(loop=0;loop<move;loop++)
		    {

            if(loop==0 && ptr2==NULL)

            {
                ptr2=start;

            }



                else
               {

                   if(ptr2->node>94)
                  {
                    if(((100-ptr2->node)<move)&&sw==0)
                    { ++turn;
                      goto q;
                    }



                }
                ptr2=ptr2->next;
                sw=1;

                }

                //readimagefile("blue.bmp",ptr2->x1,ptr2->y1,ptr2->x2,ptr2->y2);
                //readimagefile("move=dice();24ladder.bmp",0,0,610,610);


                delay(250);
                readimagefile("24ladder.bmp",0,0,610,610);
                readimagefile("blue.bmp",ptr2->x1,ptr2->y1,ptr2->x2,ptr2->y2);
                if(ptr1!=NULL)
                readimagefile("red.bmp",ptr1->x1,ptr1->y1,ptr1->x2,ptr1->y2);




   }




		      if(ptr2->up!=NULL)
		      {
		          ptr2=ptr2->up;
		          delay(250);
		          readimagefile("24ladder.bmp",0,0,610,610);
                readimagefile("blue.bmp",ptr2->x1,ptr2->y1,ptr2->x2,ptr2->y2);
                if(ptr1!=NULL)
                readimagefile("red.bmp",ptr1->x1,ptr1->y1,ptr1->x2,ptr1->y2);


		      }
		      else if(ptr2->down!=NULL)
              {

                ptr2=ptr2->down;
                delay(250);
		          readimagefile("24ladder.bmp",0,0,610,610);
                readimagefile("blue.bmp",ptr2->x1,ptr2->y1,ptr2->x2,ptr2->y2);
                if(ptr1!=NULL)
                readimagefile("red.bmp",ptr1->x1,ptr1->y1,ptr1->x2,ptr1->y2);

              }



             /* for(loop=0;loop<move;loop++)
              {




                //add img;
              }*/


            sprintf(msg, "%d", ptr2->node);
            outtextxy(850,250,msg);

              if(ptr2->flag==1)
                {
                    outtextxy(700,150,"Pl.2 wins");
                    delay(2500);
                    menu();
                }


		    break;}

        default: exit(0);
   }

    if(move!=6)
    {++turn;}
    ++z;}

    else
    {
        fp=fopen("load.txt","w+");
        fprintf(fp,"%d %d",ptr1->node,ptr2->node);
        fclose(fp);
        closegraph();
        menu();
        break;

    }

  }while(ptr1->flag!=1||ptr2->flag!=1);



}




void menu()
{
    int gd=0,gm=0;
    initgraph(&gm,&gd,"");
    initwindow(1000,610);

    int inc=0,k,spot1,spot2;
    j:
    readimagefile("three.bmp",0,0,1000,610);
    readimagefile("new.bmp",0,370,260,610);
    setfillstyle(1,0);
    bar(255,370,295,610);
    //readimagefile("arrow.bmp",260,385,290,415);
    //readimagefile("arrow.bmp",260,435,290,465);
    //readimagefile("arrow.bmp",260,475,290,505);
    //readimagefile("arrow.bmp",260,515,290,545);
    //readimagefile("arrow.bmp",260,555,290,585);

    settextstyle(3,0,6);

    outtextxy(210,50,"SNAKES AND LADDERS");


k=getch();
 while(k!=13)
    {

    k=getch();
	if(k==32)
	{

         setfillstyle(1,0);
         bar(255,370,295,610);
	     readimagefile("arrow.bmp",260,385+inc,290,415+inc);



	     inc=inc+50;
         if(inc>250)
         {
             inc=50;
             readimagefile("arrow.bmp",260,385,290,415);
         }


	}
	else if(inc==50 && k==13)
	{  cleardevice();
	    closegraph();
       ptr1=NULL;
       ptr2=NULL;

	   exec();
	   k=0;
	  // if(getch()==27)
	   //goto j;

	}
	else if(inc==100&& k==13)
	{


	   /*temp=start;
	    fp=fopen("load.txt","r+");

	    fscanf(fp,"%d %d",&spot1,&spot2);
	    while(temp!=NULL)
        {
            if(temp->node==spot1)
                {ptr1=temp;
                  }
            if(temp->node==spot2)
            {ptr2=temp;}

            temp=temp->next;
        }
        readimagefile("loading.bmp",0,0,1000,610);
        delay(2500);
	    exec();
	    fclose(fp);
	    temp=NULL;
	    ptr1=ptr2=NULL;*/




	}
	else if(inc==150&& k==13)
	{
	    readimagefile("option.bmp",0,0,1000,610);
	    settextstyle(1,0,4);
	    outtextxy(20,20,"How to play:");
	    settextstyle(3,0,3);
	    outtextxy(20,60,"* This is a two player game.");
	    outtextxy(20,90,"* Player 1 is given a red pawn and player 2 has the blue pawn.");
	    outtextxy(20,120,"* Player 1 is given a the first turn.");
	    outtextxy(20,150,"* The SPACEBAR rolls the dice, number is flashed.");
	    outtextxy(20,180,"* If the number flashed is 6, the player gets another turn to roll the dice.");
	    outtextxy(20,210,"* If a player reaches a ladder, the pawn climbs up the ladder.");
	    outtextxy(20,240,"* If the player is 'bitten' by snake, the pawn goes down to the snake's length.");
	    outtextxy(20,270,"* The player to reach the 100th block first wins.");
	    outtextxy(20,270,"* Press ESC to save the game.");

	if(getch()==27)
	goto j;
	}
	else if(inc==200&& k==13)
	{readimagefile("credits.bmp",0,0,1000,610);
	if(getch()==27)
	goto j;
	}
	else if(inc==250&& k==13)
	{  exit(0);
	}



 }


}


int main()
{

    create();
    snadder();
    menu();

    getch();
    return 0;
}










