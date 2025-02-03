#include <stdio.h>
#include <string.h>

void get_password()
{
    // Tạo chuỗi password cố định 8 byte
    unsigned char realPassword[8] = {'1', '2', '3', '4', '5', '6', '7', '\0'}; // '\0' là ký tự kết thúc chuỗi
    char givenPassword[20];

    // Nhập password từ người dùng
    gets(givenPassword); // Lấy input từ người dùng (vẫn không an toàn, dùng để minh họa)

    // So sánh chuỗi nhập với realPassword
    if (memcmp(givenPassword, realPassword, sizeof(realPassword)) == 0)
    {
        printf("SUCCESS!\n");
    }
    else
    {
        printf("FAILURE!\n");
    }

    // In ra password đã nhập và password thực
    printf("givenPassword: ");
    for (int i = 0; i < strlen(givenPassword); i++) {
        printf("%02X ", (unsigned char)givenPassword[i]); // In từng ký tự của givenPassword dưới dạng hexa
    }
    printf("\n");

    printf("realPassword: ");
    for (int i = 0; i < sizeof(realPassword); i++) {
        printf("%02X ", (unsigned char)realPassword[i]); // In từng ký tự của realPassword dưới dạng hexa
    }
    printf("\n");
}

int main()
{
    get_password();
    return 0;
}
