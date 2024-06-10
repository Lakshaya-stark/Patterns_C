#include <stdio.h>


int SQUARE(){

int n, row;

printf("Select the Element type of the Square\n1. Star\n2. Numbers\n3. Alphabets\n# ");
scanf("%d",&n);
switch(n){
case 1:
    printf("Enter the Number of Rows # ");
    scanf("%d",&row);
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= row; j++){
            printf("*");
        }
        printf("\n");
    }
    break;

case 2:
    printf("Enter the Number of Rows # ");
    scanf("%d",&row);
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= row; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    break;

case 3:
    printf("Enter the Number of Rows # ");
    scanf("%d",&row);
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= row; j++){
            printf("%c", j+64);
        }
        printf("\n");
    }
    break;
default:
    printf("Please Choose something valid :( ");
}
return 0;
}


int RECTANGLE(){

int n, row, col;

printf("Enter the Elements type of Rectangle\n1. Star\n2. Numbers\n3. Alphabets\n#  ");
scanf("%d",&n);
switch(n){
case 1:
    printf("Enter the Number of Rows # ");
    scanf("%d",&row);
    printf("Enter the Number of Columns # ");
    scanf("%d",&col);
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= col; j++){
            printf("*");
        }
        printf("\n");
    }
    break;

case 2:
    printf("Enter the Number of Rows # ");
    scanf("%d",&row);
    printf("Enter the Number of Columns # ");
    scanf("%d",&col);
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= col; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    break;

case 3:
    printf("Enter the Number of Rows # ");
    scanf("%d",&row);
    printf("Enter the Number of Columns # ");
    scanf("%d",&col);
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= col; j++){
            printf("%c", j+64);
        }
        printf("\n");
    }
    break;
default:
    printf("Please Choose something valid :( ");
}
return 0;

}


int TRIANGLE(){
int n, height, cnt = 0, pascal = 1;

printf("Select the type of Triangle #\n1. Star\n2. Number\n3. Alphabet\n4. 0-1\n5. Pascal\n6. Odd Numbered Triangle\n# ");
scanf("%d",&n);
printf("Enter the Height of the triangle # ");
scanf("%d",&height);


switch(n){
case 1:
    for(int i = 1; i<=height; i++){
        for(int j = 1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    break;
case 2:
    for(int i = 1; i<=height; i++){
        for(int j = 1; j<=i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    break;
case 3:
    for(int i = 1; i<=height; i++){
        for(int j = 1; j<=i; j++){
            printf("%c",j+64);
        }
        printf("\n");
    }
    break;

case 4:
    for(int i = 1; i<=height; i++){
        for(int j = 1; j<=i; j++){
            printf("%d",cnt);
            if(cnt == 0){
                cnt = 1;
            }
            else{
                cnt = 0;
            }
        }
        printf("\n");
    }
    break;
case 5:
    for(int i = 1; i<=height; i++){
        for(int j = 1; j<=i; j++){
            printf("%d ", pascal);
            pascal++;
        }
        printf("\n");
    }
    break;
case 6:
    for(int i = 1; i<=height; i++){
        for(int j = 1; j<=i; j++){
           printf("%d", 2*j-1);
        }
        printf("\n");
    }
    break;
}
return 0;
}


int PLUS(){
int n, mid;

printf("Enter the Size of you Plus (ODD NUMBERS ONLY) ");
scanf("%d",&n);
mid = (n+1)/2;
for(int i = 1; i<=n; i++){
    for(int j = 1; j<=n; j++){
        if(j == mid || i == mid){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}
return 0;
}


int HOLLOW_RECTANGLE(){

int row, col;
printf("Enter the number of rows # ");
scanf("%d",&row);
printf("Enter the number of columns # ");
scanf("%d",&col);

for(int i=1; i<=row; i++){
    for(int j=1; j<=col; j++){
        if(i==1 || j==1 || j==col || i==row){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}
return 0;
}


int CROSS(){
int n;
printf("Enter any odd number # ");
scanf("%d",&n);

for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        if(i==j || i+j == n+1){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}
return 0;
}


int RHOMBUS(){
int n;
printf("Enter the Side value of Rhombus # ");
scanf("%d", &n);

for(int i = 1; i<=n; i++){
    for(int j = n; j>i; j--){
        printf(" ");
    }
    for(int k = 1; k<=n; k++){
        printf("*");
    }
    printf("\n");
}

return 0;
}

int PYRAMID(){

int n, height, cnt=0,temp=1;
printf("Enter the type of pyramid #\n1. Star\n2. Alphabet\n3. Number\n4. Unique\n");
scanf("%d",&n);
printf("Enter the Height of the pyramid # ");
scanf("%d",&height);

switch(n){
case 1:
    for(int i=0; i<height; i++){
        for(int j=1; j<=height+cnt; j++){
            if(j>=height-i && j<=height+i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        cnt++;
    }
case 2:
    for(int i=0; i<height; i++){
            temp = 1;
        for(int j=1; j<=height+cnt; j++){
            if(j>=height-i && j<=height+i){
                printf("%c",temp+64);
                temp++;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        cnt++;
    }
    break;
case 3:
    for(int i=0; i<height; i++){
            temp = 1;
        for(int j=1; j<=height+cnt; j++){
            if(j>=height-i && j<=height+i){
                printf("%d",temp);
                temp++;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        cnt++;
    }
    break;
case 4:
    for(int i=0; i<height; i++){
            temp = 1;
        for(int j=1; j<=height+cnt; j++){
            if(j>=height-i && j<=height+i){
                printf("%d ",temp);
                if(j<=height-1){
                    temp++;
                }
                else{
                    temp--;
                }
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
        cnt++;
    }
    break;


default:
    printf("Please Enter something valid :(");
    break;
}


return 0;
}


int DIAMOND(){
int height;
printf("Enter the height of the diamond # ");
scanf("%d",&height);
int nsp =  height/2;
int nst = 1;
int mid = height/2 + 1;
for(int i=1; i<=height; i++){
    for(int j=1; j<=nsp; j++){
        printf(" ");
    }
    for(int k=1; k<=nst; k++){
        printf("*");
    }
    if(i<mid){
     nsp--;
     nst+=2;
    }
    else{
        nsp++;
        nst-=2;
    }

    printf("\n");
}
return 0;
}
int TABLE(){
int n;
printf("Enter the number of lines # ");
scanf("%d",&n);
int nst = n, nsp = 1;

for(int i=1; i<=n; i++){
    for(int j=1; j<=nst; j++){
        printf("*");
    }
    for(int k=1; k<=nsp; k++){
        printf(" ");
    }
    for(int j=1; j<=nst; j++){
        printf("*");
    }
    nst--;
    nsp+=2;
    printf("\n");
}
return 0;
}

int NUMBERZOOM(){
int n;
printf("Enter any number # ");
scanf("%d",&n);
int min = 0,a,b;
for(int i=1; i<=2*n-1; i++){
    for(int j=1; j<=2*n-1; j++){
        a=i, b=j;
        if(i>n) a=2*n-i;
        if(b>n) b=2*n-j;

        if(a<b) min = a;
        else min = b;
        printf("%d", min);
    }
    printf("\n");
}

return 0;

}

int main()
{
    int x;

    printf("Select the pattern in which you are interested in\n1. SQUARE\n2. RECTANGLE\n3. TRIANGLE\n4. PLUS\n5. HOLLOW RECTANGLE\n6. CROSS\n7. RHOMBUS\n8. PYRAMID\n9. DIAMOND\n10. TABLE\n11. NUMBERZOOM\n-> ");
    scanf("%d", &x);

    switch(x){
    case 1:
        SQUARE();
        break;
    case 2:
        RECTANGLE();
        break;
    case 3:
        TRIANGLE();
        break;
    case 4:
        PLUS();
        break;
    case 5:
        HOLLOW_RECTANGLE();
        break;
    case 6:
        CROSS();
        break;
    case 7:
        RHOMBUS();
        break;
    case 8:
        PYRAMID();
        break;
    case 9:
        DIAMOND();
        break;
    case 10:
        TABLE();
        break;
    case 11:
        NUMBERZOOM();
        break;
    default:
        printf("Please choose something valid :( ");
        break;
    }
    return 0;
}
