#include <stdio.h>

int main() {
    int i, j;

    printf("A\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(i==1&&j>1&&j<5||j==1&&i>1||j==5&&i>1||i==3)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\nB\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j==1||(i==1||i==3||i==5)&&j<5||j==5&&i!=1&&i!=3&&i!=5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\nC\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(i==1||i==5||j==1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\nD\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j==1||(i==1||i==5)&&j<5||j==5&&i!=1&&i!=5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\nE\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j==1||i==1||i==3||i==5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\nF\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j==1||i==1||i==3)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\nG\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j==1||i==1||i==5||i==3&&j>2||j==5&&i>2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\nH\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j==1||j==5||i==3)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\nI\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(i==1||i==5||j==3)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\nJ\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(i==1||j==3&&i<5||i==5&&j<3)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\nK\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j==1||i+j==6||i==j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\nL\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j==1||i==5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\nM\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j==1||j==5||i==j&&i<=3||i+j==6&&i<=3)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\nN\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j==1||j==5||i==j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\nO\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(i==1&&j>1&&j<5||i==5&&j>1&&j<5||j==1&&i>1&&i<5||j==5&&i>1&&i<5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\nP\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j==1||i==1||i==3||j==5&&i<3)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\nQ\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(i==1&&j>1&&j<4||i==4&&j>1&&j<4||j==1&&i>1&&i<4||j==4&&i>1&&i<4||i==5&&j==5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\nR\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j==1||i==1||i==3||j==5&&i<3||i==j&&i>3)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\nS\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(i==1||i==3||i==5||j==1&&i<3||j==5&&i>3)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\nT\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(i==1||j==3)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\nU\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j==1&&i<5||j==5&&i<5||i==5&&j>1&&j<5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\nV\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(i==j&&i<4||i+j==6&&i<4)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\nW\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j==1||j==5||i==4&&(j==2||j==4))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\nX\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(i==j||i+j==6)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\nY\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(i==j&&i<3||i+j==6&&i<3||j==3&&i>2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\nZ\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(i==1||i==5||i+j==6)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
