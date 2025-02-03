#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Hàm để lấy độ dài của chuỗi, sử dụng cho việc khai thác
int len(char *s)
{
    return strlen(s);
}

int my_function()
{
    int first_var = 0;           // Biến đầu tiên
    int second_var = 0xdeadbeef; // Biến thứ hai
    char str[2] = "hi";           // Chuỗi cố định

    char buf[10];                                          // Buffer để nhận dữ liệu từ người dùng
    gets(buf);                                             // Cảnh báo: không an toàn
    printf("After input, first_var: 0x%x\n", first_var);   // In ra giá trị sau khi nhập
    printf("After input, second_var: 0x%x\n", second_var); // In ra giá trị sau khi nhập

    // In chuỗi str theo dạng hexa mà không dùng vòng lặp
    printf("After input, str (hex): %02X %02X\n", (unsigned char)str[0], (unsigned char)str[1]);

    return len(buf); // Trả về độ dài của buffer
}

int main(int argc, char *argv[])
{
    my_function();
    return 0;
}
