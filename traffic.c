#include<stdio.h>
#include<Windows.h>
#include<time.h>
 void main()
 {
     int rtA,rtB,rtC,rtD,tRt;
     int choice;
     
     printf("Enter the runtime for Road A,B,C,D \n");
     scanf("%d %d %d %d",&rtA,&rtB,&rtC,&rtD);

     printf("Enter the Total runtime : \n");
     scanf("%d",&tRt);

     printf("Enter the Sequence\n1.ABCDA\n2.BCDAB \n 3.CDABC \n 4.DABCD \n");
     printf("Enter the choice\n");
     scanf("%d",&choice);
     

     switch(choice){
         case 1: startWithA(rtA,rtB,rtC,rtD,tRt);
                        break;
        case 2: startWithB(rtA,rtB,rtC,rtD,tRt);
                        break;
        case 3: startWithC(rtA,rtB,rtC,rtD,tRt);
                        break;
        case 4: startWithD(rtA,rtB,rtC,rtD,tRt);
                        break;
     }
 }

     void startWithA(int rta,int rtb,int rtc,int rtd,int rtr){
       int msec = 0, trigger = rtr*1000; 
        clock_t before = clock();
        int iterations=0;
       
       do {
  
              printf("\nGreen time for Road A \n");
              Sleep(rta*1000);
              printf("\nTime Elapsed");

              printf("\nGreen time for Road B \n");
              Sleep(rtb*1000);
              printf("\nTime Elapsed");

              printf("\nGreen time for Road C \n");
              Sleep(rtc*1000);
              printf("\nTime Elapsed");

              printf("\nGreen time for Road D \n");
              Sleep(rtd*1000);
              printf("\nTime Elapsed");

              printf("\nGreen time for Road A \n");
              Sleep(rta*1000);
              printf("\nTime Elapsed");

          clock_t difference = clock() - before;
          msec = difference * 1000 / CLOCKS_PER_SEC;
          iterations++;
        } while ( msec < trigger );
 }

     void startWithB(int rta,int rtb,int rtc,int rtd,int rtr)
     {
        int msec = 0, trigger = rtr*1000; 
        clock_t before = clock();
        int iterations=0;
       
       do {
  
              printf("\nGreen time for Road B \n");
              Sleep(rtb*1000);
              printf("\nTime Elapsed");

              printf("\nGreen time for Road C \n");
              Sleep(rtc*1000);
              printf("\nTime Elapsed");

              printf("\nGreen time for Road D \n");
              Sleep(rtd*1000);
              printf("\nTime Elapsed");

              printf("\nGreen time for Road A \n");
              Sleep(rta*1000);
              printf("\nTime Elapsed");

              printf("\nGreen time for Road B \n");
              Sleep(rtb*1000);
              printf("\nTime Elapsed");

              clock_t difference = clock() - before;
              msec = difference * 1000 / CLOCKS_PER_SEC;
              iterations++;
        } while ( msec < trigger );

     }

     void startWithC(int rta,int rtb,int rtc,int rtd,int rtr)
     {
        int msec = 0, trigger = rtr*1000;
        clock_t before = clock();
        int iterations=0;
       
       do {
  
               printf("\nGreen time for Road C \n");
               Sleep(rtc*1000);
               printf("\nTime Elapsed");

               printf("\nGreen time for Road D \n");
               Sleep(rtd*1000);
               printf("\nTime Elapsed");

               printf("\nGreen time for Road A \n");
               Sleep(rta*1000);
               printf("\nTime Elapsed");

               printf("\nGreen time for Road B \n");
               Sleep(rtb*1000);
               printf("\nTime Elapsed");

               printf("\nGreen time for Road C \n");
               Sleep(rtc*1000);
               printf("\nTime Elapsed");

          clock_t difference = clock() - before;
          msec = difference * 1000 / CLOCKS_PER_SEC;
          iterations++;
        } while ( msec < trigger );

    }

     void startWithD(int rta,int rtb,int rtc,int rtd,int rtr)
     {
        int msec = 0, trigger = rtr*1000; /* 10ms */
        clock_t before = clock();
        int iterations=0;
       
       do {
  
               printf("\nGreen time for Road D \n");
               Sleep(rtd*1000);
               printf("\nTime Elapsed");

               printf("\nGreen time for Road A \n");
               Sleep(rta*1000);
               printf("\nTime Elapsed");

               printf("\nGreen time for Road B \n");
               Sleep(rtb*1000);
               printf("\nTime Elapsed");

               printf("\nGreen time for Road C \n");
               Sleep(rtc*1000);
               printf("\nTime Elapsed");

               printf("\nGreen time for Road D \n");
               Sleep(rtd*1000);
                printf("\nTime Elapsed");

         clock_t difference = clock() - before;
         msec = difference * 1000 / CLOCKS_PER_SEC;
          iterations++;
        } while ( msec < trigger );

     }