/*Assignment 1 - Voting System
    Sanita Tifentale - c11432632*/

#include<stdio.h>

/*this is for useing screan cleaner*/
#include<stdlib.h>

main()
{
    /*Nameing first preferences entered by voter*/
    int can1, can2, can3, can4, can5, can6, can7; 
    
    /*Nameing second preferences entered by voter*/
    int cand1, cand2, cand3, cand4, cand5, cand6, cand7;
    
    /*Nameing third preferences entered by voter*/
    int ca1, ca2, ca3, ca4, ca5, ca6, ca7;
    
    /*Nameing my quota for 7 different cases*/
    int sum1, sum2, sum3, sum4, sum5, sum6, sum7;
    
    /*Nameing index for for loop*/
    int voter;
    
    /*Nameing choices if candidate wants enter 2nd and 3rd preference*/
    int choice, choice1;
    
    /*Nameing 1st 2nd and 3rd preferences for switch statement*/
    int vote1, vote2, vote3;
    
    /*Nameing voting end button*/
    int end;
    
    /*Nameing and declearing spoiled votes for different cases*/
    int spoiled1 = 0;
    int spoiled2 = 0;
    int spoiled3 = 0;
    
    /*Declaring value 0 at the begging for any correct vote entered*/
    can1 = 0,   cand1 = 0,  ca1 = 0;
    can2 = 0,   cand2 = 0,  ca2 = 0;
    can3 = 0,   cand3 = 0,  ca3 = 0;
    can4 = 0,   cand4 = 0,  ca4 = 0;
    can5 = 0,   cand5 = 0,  ca5 = 0;
    can6 = 0,   cand6 = 0,  ca6 = 0;
    can7 = 0,   cand7 = 0,  ca7 = 0;
    
    /*This for loop allows max of 5 voters*/
    for(voter = 0; voter < 5; voter++)
    {      
        printf("\n  **  WELCOME TO THE  ** \n");
        printf("\n  **   ONLINE VOTING  ** \n");
        printf("\n  **      SYSTEM      ** \n");
        
        printf("\n~~ Enter your 1st choice ~~\n");
        
        /*these printf statements display the candidates and their number*/ 
        printf("\nPress 1 for Mary Davis\n");
        printf("Press 2 for Sean Gallagher\n");
        printf("Press 3 for Michael D.Higgins\n");
        printf("Press 4 for Martin McGuinness\n");
        printf("Press 5 for Gay Mitchell\n");
        printf("Press 6 for David Norris\n");
        printf("Press 7 for Dana Rosemary Scallon\n");
        
        /*this printf statements lets voters know that system is waiting and they 
                can start voting*/
        printf("\n...System waiting...\n");
        
        /*this scanf statement allows voters enter 1st preference*/
        scanf("%d",&vote1);
        
        /*This switch statement checks what number was entered*/
        switch(vote1)
        {
            case 1:
            {
                /*this counts 1st candidate 1st preference votes*/
                can1 = can1++;
                break;
            }
            case 2:
            {
                /*this counts 2nd candidate 1st preference votes*/
                can2 = can2++;
                break;
            }
            case 3:
            {
                /*this counts 3rd candidate 1st preference votes*/
                can3 = can3++;
                break;
            }
            case 4:
            {
                /*this counts 4th candidate 1st preference votes*/
                can4 = can4++;
                break;
            }
            case 5:
            {
                /*this counts 5th candidate 1st preference votes*/
                can5 = can5++;
                break;
            }
            case 6:
            {
                /*this counts 6th candidate 1st preference votes*/
                can6 = can6++;
                break;
            }
            case 7:
            {   
                /*this counts 7th candidate 1st preference votes*/
                can7 = can7++;
                break;
            }
            default :
            {
                /*this counts any other numbers entered by voter and thees votes are spoiled
                                and counted together*/
                spoiled1 = spoiled1++;
                break;
            }
            
        }//end of 1st switch statement
        
        /*this clears screan*/
        system ("cls");
        
        /*This printf statement  asks if voter wants to enter his 2nd preference or not*/
        printf("Would you like to enter 2nd choice?\n");
        printf("\nIf yes press 1\nIf no  press 2\n");
        
        /*this scanf statement allows enter 1 or 2 for continuing voting or finishing voting*/
        scanf("%d",&choice);
        
        /*this clears screan*/
        system ("cls");
        
        /*this if statement allows voter to enter 2nd preference*/
        if(choice == 1)
        {   
            
            printf("\n~~ Enter your 2nd choice ~~\n");
            
            /*these printf statements display the candidates and their number*/ 
            printf("\nPress 1 for Mary Davis\n");
            printf("Press 2 for Sean Gallagher\n");
            printf("Press 3 for Michael D.Higgins\n");
            printf("Press 4 for Martin McGuinness\n");
            printf("Press 5 for Gay Mitchell\n");
            printf("Press 6 for David Norris\n");
            printf("Press 7 for Dana Rosemary Scallon\n");
            
            /*this printf statements lets voters know that system is waiting and they 
                        can start voting*/
            printf("\n...System waiting...\n");
            
            /*this scanf statement allows voters enter 2nd preference*/
            scanf("%d",&vote2);
            
            /*This switch statement counts 2nd preference votes */
            switch(vote2)
            {
                case 1:
                {
                    /*this counts 1st candidate 2nd preference votes*/
                    cand1 = cand1++;
                    break;
                }
                case 2:
                {
                    /*this counts 2nd candidate 2nd preference votes*/
                    cand2 = cand2++;
                    break;
                }
                case 3:
                {
                    /*this counts 3rd candidate 2nd preference votes*/
                    cand3 = cand3++;
                    break;
                }
                case 4:
                {
                    /*this counts 4th candidate 2nd preference votes*/
                    cand4 = cand4++; 
                    break;
                }
                case 5:
                {
                    /*this counts 5th candidate 2nd preference votes*/
                    cand5 = cand5++;
                    break;
                }
                case 6:
                {
                    /*this counts 6th candidate 2nd preference votes*/
                    cand6 = cand6++;
                    break;
                }
                case 7:
                {   
                    /*this counts 7th candidate 2nd preference votes*/
                    cand7 = cand7++;
                    break;
                }
                default :
                {
                    /*this counts any other numbers entered by voter and thees votes are spoiled
                                        and counted together*/
                    spoiled2 = spoiled2++;
                    break ;
                }
            }//end of 2nd switch statement
        }
        
        /*this clears screan*/
        system ("cls");
        
        /*This if statement should beging program from begining if voter enters 2, but i 
                am not sure how to make it happen. So i am showing a begining of it*/
        if(choice == 2)
        {
            
        }
        
        /*This printf statement  asks if voter wants to enter his 3rd preference or not*/
        printf("Would you like to enter 3rd choice?\n");
        printf("\nIf yes press 1\nIf no  press 2\n");
        
        /*this scanf statement allows enter 1 or 2 for continuing voting or finishing voting*/
        scanf("%d",&choice1);
        
        /*this clears screan*/
        system ("cls");
        
        if(choice1 == 1)
        {   
            printf("\n~~ Enter your 3rd choice ~~\n");
            
            /*these printf statements display the candidates and their number*/ 
            printf("\nPress 1 for Mary Davis\n");
            printf("Press 2 for Sean Gallagher\n");
            printf("Press 3 for Michael D.Higgins\n");
            printf("Press 4 for Martin McGuinness\n");
            printf("Press 5 for Gay Mitchell\n");
            printf("Press 6 for David Norris\n");
            printf("Press 7 for Dana Rosemary Scallon\n");
            
            /*this printf statements lets voters know that system is waiting and they 
                        can start voting*/
            printf("\n...System waiting...\n");
            
            /*this scanf statement allows voters enter 3rd preference*/
            scanf("%d",&vote3);
            
            /*This switch statement counts 3rd preference votes */
            switch(vote3)
            {
                case 1:
                {
                    /*this counts 1st candidate 3rd preference votes*/
                    ca1 = ca1++;
                    break;
                }
                case 2:
                {
                    /*this counts 2nd candidate 3rd preference votes*/
                    ca2 = ca2++;
                    break;
                }
                case 3:
                {
                    /*this counts 3rd candidate 3rd preference votes*/
                    ca3 = ca3++;
                    break;
                }
                case 4:
                {
                    /*this counts 4th candidate 3rd preference votes*/
                    ca4 = ca4++;
                    break;
                }
                case 5:
                {
                    /*this counts 5th candidate 3rd preference votes*/
                    ca5 = ca5++;
                    break;
                }
                case 6:
                {
                    /*this counts 6th candidate 3rd preference votes*/
                    ca6 = ca6++;
                    break;
                }
                case 7:
                {   
                    /*this counts 7th candidate 3rd preference votes*/
                    ca7 = ca7++;
                    break;
                }
                default :
                {
                    /*this counts any other numbers entered by voter and thees votes are spoiled
                                        and counted together*/
                    spoiled3 = spoiled3++;
                    break ;
                }
            }//end of 3rd switch statement
        }
        
        /*This if statement should beging program from begining if voter enters 2, but i 
                am not sure how to make it happen. So i am showing a begining of it*/
        if(choice1 == 2)
        {
            
        }
        
        /*this clears screan*/
        system ("cls");
        
        printf("\n~* Thanks for voting *~\n");
        
        printf("\nPress 1 to end the program\n");
        
        /*this scanf statement allows to finish program nicely*/
        scanf("%d",&end);
        
        /*this clears screan*/
        system ("cls");
    }//end of for loop
    
    /*this displays how many votes have each candidate and i have it to check if actualy my program does
        count the votes correctly and it helps to see who is the winner*/
    printf("Mary Davis              1st = %d 2nd = %d 3rd = %d\n", can1, cand1, ca1);
    printf("Sean Gallagher          1st = %d 2nd = %d 3rd = %d\n", can2, cand2, ca2);
    printf("Michael D.Higgins       1st = %d 2nd = %d 3rd = %d\n", can3, cand3, ca3);
    printf("Martin McGuinness       1st = %d 2nd = %d 3rd = %d\n", can4, cand4, ca4);
    printf("Gay Mitchell            1st = %d 2nd = %d 3rd = %d\n", can5, cand5, ca5);
    printf("David Norris            1st = %d 2nd = %d 3rd = %d\n", can6, cand6, ca6);
    printf("Dana Rosemary Scallon   1st = %d 2nd = %d 3rd = %d\n", can7, cand7, ca7);
    printf("Spoiled votes           1st = %d 2nd = %d 3rd = %d\n", spoiled1, spoiled2, spoiled3);
    
    /*This if statements shows that candidate 1 has the most votes*/
    if(can1 > can2 && can1 > can3 && can1 > can4 && can1 > can5 && can1 > can6 && can1 > can7)
    {
        /*this is the sum of other candidates 1st preference votes and this is my quota*/
        sum1 = can2 + can3 + can4 + can5 + can6 + can7;
        
        /*this if statement states that if candidate 1 has more votes or if it passes the quota then he/she is the winner and 
                it prints out the winner with the votes he/she has. In this case the winner is Mary Davis*/
        if(can1 > sum1)
        {
            printf("\nWINNER is Mary Davis with %d votes\n",can1);
        }
        
        /*this if statement states that if candidate 1 has less votes or if candidate 1 didnt pass the quota then you find 
                candidate with least votes and eliminate him and give his 2nd and 3rd preference votes to candidate 1 because he 
                had the most votes in first round - thats my understanding of vote transfers*/
        if(can1 < sum1)
        {
            /*this if statement states that candidate 2 has least amount of votes so you need to eliminatehim/her and give 
                        his/hers 2nd and 3rd preference votes to candidate 1*/
            if(can2 < can3 && can2 < can4 && can2 < can5 && can2 < can6 && can2 < can7)
            {
                /*I give 2nd and 3rd preference votes from candidate with least amount of votes to candidate who got 
                                the most votes in first round. So in this case from candidate 2 to candidate 1*/
                can1 = can1 + cand2 + ca2;
                
                /*This is my new quota with out second candidate because he had least amount ofvotes so he got eliminated*/
                sum1 = can3 + can4 + can5 + can6 + can7;
                
                /*this if statement states that if candidate 1 new votes passes the new quota then he/she is the winner 
                                and it prints out the winner with the votes he/she has. In this case the winner is Mary Davis*/
                if(can1 > sum1)
                {
                    printf("\nWINNER is Mary Davis with %d votes\n",can1);
                }
                
                /*This if statement shows that candidates 1 votes are less than new quota so it should find another 
                                candidate with least amount of votes and eliminate it, give his/her 2nd and 3rd preference votes to 
                                candidate 1 because in this case he got the most votes in first round. But i am not doing this because no 
                                matter how many times you eliminate candidate with least amount of votes and give their votes to 
                                candidate 1 you still will end up with the same winner and people who voted dont see how program 
                                works so we can save time by not doing this*/
                if(can1 < sum1)
                {
                    printf("\nWINNER is Mary Davis with %d votes\n",can1);
                }
            }
            
            /*this print f statement prints winner and in this case it is Mary Davis because in first round she got the most votes 
                        and like i explained above my understanding of vote transfers. So its no matter how many times you eliminate 
                        candidates with least votes and give their 2nd and 3rd preference votes to candidate 1. Still at the end 
                        candidate 1 is the winner.*/
            printf("\nWINNER is Mary Davis with %d votes\n",can1);
        }
    }
    
    /*This if statements shows that candidate 2 has the most votes*/
    if(can2>can1 && can2>can3 && can2>can4 && can2>can5 && can2>can6 && can2>can7)
    {
        /*this is the sum of other candidates 1st preference votes and this is my quota*/
        sum2 = can1 + can3 + can4 + can5 + can6 + can7;
        
        /*this if statement states that if candidate 2 has more votes or if it passes the quota then he/she is the winner and it 
                prints out the winner with the votes he/she has. In this case the winner is Sean Gallagher*/
        if(can2 > sum2)
        {
            printf("\nWINNER is Sean Gallagher with %d votes\n",can2);
        }
        
        /*this if statement states that if candidate 2 has less votes or if candidate 2 didnt pass the quota then you find candidate 
                with least votes and eliminate him and give his 2nd and 3rd preference votes to candidate 2 because he had the most votes 
                in first round - thats my understanding of vote transfers*/
        if(can2 < sum2)
        {
            /*this if statement states that candidate 1 has least amount of votes so you need to eliminate him/her and distribute 
                        his/hers 2nd and 3rd preference votes to candidate 2*/
            if(can1 < can3 && can1 < can4 && can1 < can5 && can1 <can6 && can1 < can7)
            {
                /*I give 2nd and 3rd preference votes from candidate with least amount of votes to candidate who got the most 
                                votes in first round. So in this case from candidate 1 to candidate 2*/
                can2 = can2 + cand1 + ca1;
                
                /*This is my new quota with out first candidate because he had least amount of votes so he got eliminated*/
                sum2 = can3 + can4 + can5 + can6 + can7;
                
                /*this if statement states that if candidate 2 new votes passes the new quota then he/she is the winner and it 
                                prints out the winner with the votes he/she has. In this case the winner is Sean Gallagher*/
                if(can2 > sum2)
                {
                    printf("\nWINNER is Sean Gallagher with %d votes\n",can2);
                }
                
                /*This if statement shows that candidates 2 votes are less than new quota so it should find another candidate 
                                with least amount of votes and eliminate it, give his/her 2nd and 3rd preference votes to candidate 2 because 
                                in this case he got the most votes in first round. But i am not doing this because no matter how many times you 
                                eliminate candidate with least amount of votes and give their votes to candidate 2 you still will end up with 
                                the same winner and people who voted dont see how program works so we can save time by not doing this*/
                if(can2 < sum2)
                {
                    printf("\nWINNER is Sean Gallagher with %d votes\n",can2);
                }
            }
            /*this printf statement prints winner and in this case it is Sean Gallagher because in first round he got the most votes 
                        and i explained above my understanding of vote transfers. So its no matter how many times you eliminate candidates 
                        with least votes and give their 2nd and 3rd preference votes to candidate 2. Still at the end candidate 2 is the winner.*/
            printf("\nWINNER is Sean Gallagher with %d votes\n",can2);
        }
    }
    
    /*This if statements shows that candidate 3 has the most votes*/
    if(can3>can1 && can3>can2 && can3>can4 && can3>can5 && can3>can6 && can3>can7)
    {
        /*this is the sum of other candidates 1st preference votes and this is my quota*/
        sum3 = can2+can1+can4+can5+can6+can7;
        
        /*this if statement states that if candidate 3 has more votes or if it passes the quota then he/she is the winner and it prints out 
                the winner with the votes he/she has. In this case the winner is Michael D.Higgins*/
        if(can3 > sum3)
        {
            printf("\nWINNER is Michael D.Higgins with %d votes\n",can3);
        }
        
        /*this if statement states that if candidate 3 has less votes or if candidate 3 didnt pass the quota then you find candidate with 
                least votes and eliminate him/her and give his/hers 2nd and 3rd preference votes to candidate 3 because he had the most votes 
                in first round - thats my understanding of vote transfers*/
        if(can3 < sum3)
        {
            /*this if statement states that candidate 1 has least amount of votes so you need to eliminate him/her and distribute his/hers 
                        2nd and 3rd preference votes to candidate 3*/
            if(can1 < can2 && can1 < can4 && can1 < can5 && can1 < can6 && can1 < can7)
            {
                /*I give 2nd and 3rd preference votes from candidate with least amount of votes to candidate who got the most votes 
                                in first round. So in this case from candidate 1 to candidate 3*/
                can3 = can3 + cand1 + ca1;
                
                /*This is my new quota with out first candidate because he/she had least amount of votes so he/she got eliminated*/
                sum3 = can2 + can4 + can5 + can6 + can7;
                
                /*this if statement states that if candidate 3 his/hers new votes passes the new quota then he/she is the winner and 
                                it prints out the winner with the votes he/she has. In this case the winner is Michael D.Higgins*/
                if(can3 > sum3)
                {
                    printf("\nWINNER is Michael D.Higgins with %d votes\n",can3);
                }
                
                /*This if statement shows that candidates 3 votes are less than new quota so it should find another candidate with 
                                least amount of votes and eliminate it, give his/her 2nd and 3rd preference votes to candidate 3 because in this case 
                                he got the most votes in first round. But i am not doing this because no matter how many times you eliminate candidate 
                                with least amount of votes and give their votes to candidate 3 you still will end up with the same winner and people 
                                who voted dont see how program works so we can save time by not doing this*/
                if(can3 < sum3)
                {
                    printf("\nWINNER is Michael D.Higgins with %d votes\n",can3);
                }
            } 
            /*this print f statement prints winner and in this case it is Michael D.Higgins because in first round he got the most votes 
                        and i explained above my understanding of vote transfers. So its no matter how many times you eliminate candidates with 
                        least votes and give their 2nd and 3rd preference votes to candidate 3. Still at the end candidate 3 is the winner.*/
            printf("\nWINNER is Michael D.Higgins with %d votes\n",can3);
        }
    }
    
    /*This if statements shows that candidate 4 has the most votes*/
    if(can4 > can1 && can4 > can2 && can4 > can3 && can4 > can5 && can4 > can6 && can4 > can7)
    {
        /*this is the sum of other candidates 1st preference votes and this is my quota*/
        sum4 = can2 + can3 + can1 + can5 + can6 + can7;
        
        /*this if statement states that if candidate 4 has more votes or if it passes the quota then he/she is the winner and it prints 
                out the winner with the votes he/she has. In this case the winner is Martin McGuinness*/
        if(can4 > sum4)
        {
            printf("\nWINNER is Martin McGuinness with %d votes\n",can4);
        }
        
        /*this if statement states that if candidate 4 has less votes or if candidate 4 didnt pass the quota then you find candidate 
                with least votes and eliminate him/her and give his/hers 2nd and 3rd preference votes to candidate 4 because he had the 
                most votes in first round - thats my understanding of vote transfers*/
        if(can4 < sum4)
        {
            /*this if statement states that candidate 1 has least amount of votes so you need to eliminate him/her and give his/hers 
                        2nd and 3rd preference votes to candidate 4*/
            if(can1 < can2 && can1 < can3 && can1 < can5 && can1 < can6 && can1 < can7)
            {
                /*I give 2nd and 3rd preference votes from candidate with least amount of votes to candidate who got the most 
                                votes in first round. So in this case from candidate 1 to candidate 4*/
                can4 = can4 + cand1 + ca1;
                
                /*This is my new quota with out first candidate because he had least amount of votes so he got eliminated*/
                sum4 = can2 + can3 + can5 + can6 + can7;
                
                /*this if statement states that if candidate 4 new votes passes the new quota then he/she is the winner and it 
                                prints out the winner with the votes he/she has. In this case the winner is Martin McGuinness*/
                if(can4 > sum4)
                {
                    printf("\nWINNER is Martin McGuinness with %d votes\n",can4);
                }
                
                /*This if statement shows that candidates 4 votes are less than new quota so it should find another candidate 
                                with least amount of votes and eliminate it, give his/her 2nd and 3rd preference votes to candidate 4 because 
                                in this case he got the most votes in first round. But i am not doing this because no matter how many times you 
                                eliminate candidate with least amount of votes and give their votes to candidate 4 you still will end up with 
                                the same winner and people who voted dont see how program works so we can save time by not doing this*/
                if(can4 < sum4)
                {
                    printf("\nWINNER is Martin McGuinness with %d votes\n",can4);
                }
            } 
            /*this printf statement prints winner and in this case it is Martin McGuinness because in first round he got the most 
                        votes and i explained above my understanding of vote transfers. So its no matter how many times you eliminate 
                        candidates with least votes and give their 2nd and 3rd preference votes to candidate 4. Still at the end candidate 4 
                        is the winner.*/
            printf("\nWINNER is Martin McGuinness with %d votes\n",can4);
        }
    }
    
    /*This if statements shows that candidate 5 has the most votes*/
    if(can5 > can1 && can5 > can2 && can5 > can3 && can5 > can4 && can5 > can6 && can5 > can7)
    {
        /*this is the sum of other candidates 1st preference votes and this is my quota*/
        sum5 = can2 + can3 + can4 + can1 + can6 + can7;
        
        /*this if statement states that if candidate 5 has more votes or if it passes the quota then he/she is the winner and it 
                prints out the winner with the votes he/she has. In this case the winner is Gay Mitchell*/
        if(can5 > sum5)
        {
            printf("\nWINNER is Gay Mitchell with %d votes\n",can5);
        }
        
        /*this if statement states that if candidate 5 has less votes or if candidate 5 didnt pass the quota then you find 
                candidate with least votes and eliminate him and give his 2nd and 3rd preference votes to candidate 1 because he had 
                the most votes in first round - thats my understanding of vote transfers*/
        if(can5 < sum5)
        {
            /*this if statement states that candidate 1 has least amount of votes so you need to eliminate  him/her and 
                        distribute his/hers 2nd and 3rd preference votes to candidate 5*/
            if(can1 < can2 && can1 < can3 && can1 < can4 && can1 < can6 && can1 < can7)
            {
                /*I give 2nd and 3rd preference votes from candidate with least amount of votes to candidate who got the 
                                most votes in first round. So in this case from candidate 1 to candidate 5*/
                can5 = can5 + cand1 + ca1;
                
                /*This is my new quota with out first candidate because he had least amount of votes so he got eliminated*/
                sum5 = can2 + can3 + can4 + can6 + can7;
                
                /*this if statement states that if candidate 5 new votes passes the new quota then he/she is the winner and 
                                it prints out the winner with the votes he/she has. In this case the winner is Gay Mitchell*/
                if(can5 > sum5)
                {
                    printf("\nWINNER is Gay Mitchell with %d votes\n",can5);
                }
                
                /*This if statement shows that candidates 5 votes are less than new quota so it should find another candidate 
                                with least amount of votes and eliminate it, give his/her 2nd and 3rd preference votes to candidate 5 because 
                                in this case he got the most votes in first round. But i am not doing this because no matter how many times you 
                                eliminate candidate with least amount of votes and give their votes to candidate 5 you still will end up with 
                                the same winner and people who voted dont see how program works so we can save time by not doing this*/
                if(can5 < sum5)
                {
                    printf("\nWINNER is Gay Mitchell with %d votes\n",can5);
                }
            } 
            /*this print f statement prints winner and in this case it is Gay Mitchell because in first round he got the most votes 
                        and i explained above my understanding of vote transfers. So its no matter how many times you eliminate candidates 
                        with least votes and give their 2nd and 3rd preference votes to candidate 5. Still at the end candidate 5 is the winner.*/
            printf("\nWINNER is Gay Mitchell with %d votes\n",can5);
        }
    }
    
    /*This if statements shows that candidate 6 has the most votes*/
    if(can6 > can1 && can6 > can2 && can6 > can3 && can6 > can4 && can6 > can5 && can6 > can7)
    {
        /*this is the sum of other candidates 1st preference votes and this is my quota*/
        sum6 = can2 + can3 + can4 + can5 + can1 + can7;
        
        /*this if statement states that if candidate 6 has more votes or if it passes the quota then he/she is the winner and it prints 
                out the winner with the votes he/she has. In this case the winner is David Norris*/
        if(can6 > sum6)
        {
            printf("\nWINNER is David Norris with %d votes\n",can6);
        }
        
        /*this if statement states that if candidate 6 has less votes or if candidate 6 didnt pass the quota then you find candidate 
                with least votes and eliminate him and give his 2nd and 3rd preference votes to candidate 6 because he had the most votes 
                in first round - thats my understanding of vote transfers*/
        if(can6 < sum6)
        {
            /*this if statement states that candidate 1 has least amount of votes so you need to eliminate him/her and distribute 
                        his/hers 2nd and 3rd preference votes to candidate 6*/
            if(can1 < can2 && can1 < can3 && can1 < can4 && can1 < can5 && can1 < can7)
            {
                /*I give 2nd and 3rd preference votes from candidate with least amount of votes to candidate who got the most
                                votes in first round. So in this case from candidate 1 to candidate 6*/
                can6 = can6 + cand1 + ca1;
                
                /*This is my new quota with out first candidate because he had least amount of votes so he got eliminated*/
                sum6 = can2 + can3 + can4 + can5 + can7;
                
                /*this if statement states that if candidate 6 new votes passes the new quota then he/she is the winner and it prints 
                                out the winner with the votes he/she has. In this case the winner is David Norris*/
                if(can6 > sum6)
                {
                    printf("\nWINNER is David Norris with %d votes\n",can6);
                }
                
                /*This if statement shows that candidates 6 votes are less than new quota so it should find another candidate with 
                                least amount of votes and eliminate it, give his/her 2nd and 3rd preference votes to candidate 6 because in this 
                                case he got the most votes in first round. But i am not doing this because no matter how many times you eliminate 
                                candidate with least amount of votes and give their votes to candidate 6 you still will end up with the same winner 
                                and people who voted dont see how program works so we can save time by not doing this*/
                if(can6 < sum6)
                {
                    printf("\nWINNER is David Norris with %d votes\n",can6);
                }
            } 
            /*this print f statement prints winner and in this case it is David Norris because in first round he got the most votes 
                        and i explained above my understanding of vote transfers. So its no matter how many times you eliminate candidates 
                        with least votes and give their 2nd and 3rd preference votes to candidate 6. Still at the end candidate 6 is the winner.*/
            printf("\nWINNER is David Norris with %d votes\n",can6);
        }
    }
    
    /*This if statements shows that candidate 7 has the most votes*/
    if(can7 > can1 && can7 > can2 && can7 > can3 && can7 > can4 && can7 > can5 && can7 > can6)
    {
        /*this is the sum of other candidates 1st preference votes and this is my quota*/
        sum7 = can2 + can3 + can4 + can5 + can6 + can1;
        
        /*this if statement states that if candidate 7 has more votes or if it passes the quota then he/she is the winner and it prints 
                out the winner with the votes he/she has. In this case the winner is Dana Rosemary Scallon */
        if(can7 > sum7)
        {
            printf("\nWINNER is Dana Rosemary Scallon with %d votes\n",can7);
        }
        
        /*this if statement states that if candidate 7 has less votes or if candidate 7 didnt pass the quota then you find candidate
                with least votes and eliminate him and give his 2nd and 3rd preference votes to candidate 7 because he had the most votes 
                in first round - thats my understanding of vote transfers*/
        if(can7 < sum7)
        {
            /*this if statement states that candidate 1 has least amount of votes so you need to eliminate him/her and distribute
                        his/hers 2nd and 3rd preference votes to candidate 7*/
            if(can1 < can2 && can1 < can3 && can1 < can4 && can1 < can5 && can1 < can6)
            {
                /*I give 2nd and 3rd preference votes from candidate with least amount of votes to candidate who got the most 
                                votes in first round. So in this case from candidate 1 to candidate 7*/
                can7 = can7 + cand1 + ca1;
                
                /*This is my new quota with out first candidate because he had least amount of votes so he got eliminated*/
                sum7 = can2 + can3 + can4 + can5 + can6;
                
                /*this if statement states that if candidate 7 new votes passes the new quota then he/she is the winner and it 
                                prints out the winner with the votes he/she has. In this case the winner is Dana Rosemary Scallon*/
                if(can7 > sum7)
                {
                    printf("\nWINNER is Dana Rosemary Scallon with %d votes\n",can7);
                }
                
                /*This if statement shows that candidates 7 votes are less than new quota so it should find another candidate 
                                with least amount of votes and eliminate it, give his/her 2nd and 3rd preference votes to candidate 7 because 
                                in this case he got the most votes in first round. But i am not doing this because no matter how many times you 
                                eliminate candidate with least amount of votes and give their votes to candidate 7 you still will end up with 
                                the same winner and people who voted dont see how program works so we can save time by not doing this*/
                if(can1 < sum1)
                {
                    printf("\nWINNER is Dana Rosemary Scallon with %d votes\n",can7);
                }
            } 
            /*this print f statement prints winner and in this case it is Dana Rosemary Scallon because in first round she got the 
                        most votes and like i explained above my understanding of vote transfers. So its no matter how many times you 
                        eliminate candidates with least votes and give their 2nd and 3rd preference votes to candidate 7. Still at the end 
                        candidate 7 is the winner.*/
            printf("\nWINNER is Dana Rosemary Scallon with %d votes\n",can7);
        }
    }
    
    /*this lets to end program nicely*/
    printf("\nThanks for useing this Voting System!\n");
    printf("\nTo end the program press ENTER button...\n");
    
    fflush(stdin);
    getchar();
    
}//end of main()