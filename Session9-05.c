#include <stdio.h>

int main() {
    int array[100], n = 0, choice;
    int i;
    int j;

    do {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan li\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                printf("Nhap so phan tu: ");
                scanf("%d", &n);
                if (n <= 0 || n > 100) {
                    printf("So luong phan tu khong hop le!\n");
                    break;
                }
                for (i = 0; i < n; i++) {
                    printf("Phan tu tai vi tri %d: ", i);
                    scanf("%d", &array[i]);
                }
                break;
            }
            case 2: {
                printf("Cac phan tu trong mang: ");
                for ( i = 0; i < n; i++) {
                    printf("%d ", array[i]);
                }
                printf("\n");
                break;
            }
            case 3: {
                int sum = 0;
                printf("Cac phan tu chan: ");
                for ( i = 0; i < n; i++) {
                    if (array[i] % 2 == 0) {
                        printf("%d ", array[i]);
                        sum += array[i];
                    }
                }
                printf("\nTong cac phan tu chan: %d\n", sum);
                break;
            }
            case 4: {
                if (n == 0) {
                    printf("Mang rong, khong co gia tri de tim.\n");
                    break;
                }
                int max = array[0], min = array[0];
                for ( i = 1; i < n; i++) {
                    if (array[i] > max) max = array[i];
                    if (array[i] < min) min = array[i];
                }
                printf("Gia tri lon nhat: %d\n", max);
                printf("Gia tri nho nhat: %d\n", min);
                break;
            }
            case 5: {
                int sum = 0;
                printf("Cac phan tu la so nguyen to: ");
                for ( i = 0; i < n; i++) {
                    int prime = 1;
                    if (array[i] <= 1) {
                        prime = 0;
                    } else {
                        for (j = 2; j * j <= array[i]; j++) {
                            if (array[i] % j == 0) {
                                prime = 0;
                                break;
                            }
                        }
                    }
                    if (prime == 1) {
                        printf("%d ", array[i]);
                        sum += array[i];
                    }
                }
                printf("\nTong cac so nguyen to: %d\n", sum);
                break;
            }
            case 6: {
                int number, count = 0;
                printf("Nhap so can thong ke: ");
                scanf("%d", &number);
                for ( i = 0; i < n; i++) {
                    if (array[i] == number) count++;
                }
                printf("Co %d phan tu bang %d trong mang.\n", count, number);
                break;
            }
            case 7: {
                int index, valueItem;
                printf("Vi tri muon chen vao (0 den %d): ", n);
                scanf("%d", &index);
                if (index < 0 || index > n) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }
                printf("Nhap gia tri muon chen: ");
                scanf("%d", &valueItem);

                for ( i = n; i > index; i--) {
                    array[i] = array[i - 1];
                }
                array[index] = valueItem;
                n++;  

                printf("Mang sau khi them: ");
                for ( i = 0; i < n; i++) {
                    printf("%d ", array[i]);
                }
                printf("\n");
                break;
            }
            case 8: {
                printf("Thoat chuong trinh.\n");
                break;
            }
            default: {
                printf("Lua chon khong hop le\n");
            }
        }
    } while (choice != 8);

    return 0;
}

