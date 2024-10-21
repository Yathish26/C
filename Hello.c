# include<stdio.h>

int Result(int x, int y){
    if (x > y){
        return 5;
    } else {
        return 1;
    };
}

int main(){
    int ans = Result(95,30);
    if (ans == 5){
        printf("This is Mass");
    }else {
        printf("This is loss");
    }
}