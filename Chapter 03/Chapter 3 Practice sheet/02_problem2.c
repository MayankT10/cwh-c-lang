// 2. Write a program to determine whether a student has passed or failed. To pass,a student requires a total of 40% and at least 33% in each subject. 
// Assume there are three subjects and take the marks as input from the user

#include<stdio.h>

int main() {
    int sub1,sub2,sub3;
    int tot1,tot2,tot3;
    float per1,per2,per3;
    printf("Enter subject 1 marks scored:");
    scanf("%d",&sub1);
    printf("Enter subject 1 marks total:");
    scanf("%d",&tot1);
    printf("Enter subject 2 marks scored:");
    scanf("%d",&sub2);
    printf("Enter subject 2 marks total:");
    scanf("%d",&tot2);
    printf("Enter subject 3 marks scored:");
    scanf("%d",&sub3);
    printf("Enter subject 3 marks total:");
    scanf("%d",&tot3);

    per1 = ((float)sub1/tot1) * 100;
    per2 = ((float)sub2/tot2) * 100;
    per3 = ((float)sub3/tot3) * 100;

    if ((per1>33 && per2>33 && per3>33) && ((per1+per2+per3)/3)>=40) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }


    // wrong inncorect calculations of percentage
    // if ((sub1/100+sub2/100+sub3/100)>45 && (sub1/100)>33 && (sub2/100>33)>33 & (sub3/100)>33) {
    //     printf("Pass");
    // } else {
    //     printf("Fail");
    // }
    
    return 0;
}