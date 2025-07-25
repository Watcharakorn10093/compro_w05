#include <stdio.h>

int main() {
char name; // ประกาศตัวแปรสำหรับเก็บข้อมูล
int age; // ประกาศตัวแปรสำหรับเก็บข้อมูล
float weight; // ประกาศตัวแปรสำหรับเก็บข้อมูล


printf("Enter your: name, age, and weight: "); // ข้อความให้ผู้ใช้ป้อนข้อมูล
scanf("%c %d %f", &name, &age, &weight); // รับข้อมูลจากผู้ใช้


printf("Student %c is %d years old.\n", name,age); // เเสดงข้อมูล name,age จากตัวเเปรที่เก็บข้อมูลมา
printf("His weight is %.2f kg.\n", weight); // เเสดงข้อมูล weight จากตัวเเปรที่เก็บข้อมูลมา

return 0; // คืนค่า 0 เพื่อบ่งชี้ว่าการทำงานสำเร็จ

}