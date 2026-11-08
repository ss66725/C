#include <stdio.h>
int main() {
    float radius = 1.5;
    float height = 3.0;
    float circle_circumference = 2*3.14*radius;
    float circle_area = 3.14*radius*radius;
    float sphere_surface_area = 4*3.14*radius*radius;
    float sphere_volume = (4.0/3.0)*3.14*radius*radius*radius;
    float cylinder_volume = 3.14*radius*radius*height;
    float correct_answer[5] = {circle_circumference, circle_area, sphere_surface_area, sphere_volume, cylinder_volume};
    float user_answer[5];
    char questions[5][100] = {
        "What is the circumference of a circle with radius 1.5?",
        "What is the area of a circle with radius 1.5?",
        "What is the surface area of a sphere with radius 1.5?",
        "What is the volume of a sphere with radius 1.5?",
        "What is the volume of a cylinder with radius 1.5 and height 3?"
    };
    int correct_count = 0;
    for(int i = 0; i < 5; i++){
        printf("%s\n", questions[i]);
        scanf("%f",&user_answer[i]);
        if(user_answer[i] == correct_answer[i]){
            printf("Your answer is correct!\n");
            correct_count++;
        }
        else{
            printf("Your answer is incorrect. The correct answer is %f\n",correct_answer[i]);
        }
    }
    printf("You correctly answered %d questions.\n",correct_count);
    return 0;
}