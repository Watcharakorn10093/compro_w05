#include <stdio.h>

int main() {
char name[30]; // ประกาศตัวแปรสำหรับเก็บชื่อ
int age; // ประกาศตัวแปรสำหรับเก็บอายุ
float height; // ประกาศตัวแปรสำหรับเก็บส่วนสูง
char subject; // ประกาศตัวแปรสำหรับเก็บวิชา
float grade; // ประกาศตัวแปรสำหรับเก็บเกรด
char gradechar; // ประกาศตัวแปรสำหรับเก็บรหัสเกรด


printf("Enter your name, age, height: "); // ข้อความให้ผู้ใช้ป้อนข้อมูลชื่อ, อายุ, และส่วนสูง
// รับข้อมูลจากผู้ใช้ โดยใช้ %s สำหรับสตริง, %d สำหรับจำนวนเต็ม, %f สำหรับจำนวนทศนิยม
// และใช้ & เพื่อส่งที่อยู่ของตัวแปร
scanf("%s %d %f", name, &age, &height); // รับข้อมูลจากผู้ใช้

printf("Enter subject, grade, gradechart: "); // ข้อความให้ผู้ใช้ป้อนข้อมูลวิชา, เกรด, และรหัสเกรด
// รับข้อมูลจากผู้ใช้ โดยใช้ %c สำหรับตัวอักษร, %f สำหรับจำนวนทศนิยม
// และใช้ & เพื่อส่งที่อยู่ของตัวแปร
scanf(" %c %f %c", &subject, &grade, &gradechar); // รับข้อมูลจากผู้ใช้


printf("%s is %d years old and %.1f centimeters tall.\n", name, age, height); // แสดงข้อมูลชื่อ, อายุ, และส่วนสูง
printf("In subject %c, %s got %.2f which is symbolized as '%c'.\n", subject, name, grade, gradechar); // แสดงข้อมูลวิชา, เกรด, และรหัสเกรด

return 0; // คืนค่า 0 เพื่อบ่งชี้ว่าการทำงานสำเร็จ

}