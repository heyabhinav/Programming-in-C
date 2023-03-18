#include<stdio.h>

float add(float a, float b){
    return a+b;
}
float sub(float a, float b){
    return a-b;
}
float mul(float a, float b){
    return a*b;
}
float div(float a, float b){
    return a/b;
}

float (*fp[4])(float, float);

int main(){
    float n1, n2;
    int ch;

    fp[0] = add;
    fp[1] = sub;
    fp[2] = mul;
    fp[3] = div;

    printf("Enter numbers : ");
    scanf("%f %f", &n1, &n2);

    printf("0.Add\n1.Sub\n2.Mul\n3.Div\nEnter choice : ");
    scanf("%d", &ch);

    float r = (*fp[ch])(n1, n2);

    printf("Result : %.2f", r);
    return 0;
}