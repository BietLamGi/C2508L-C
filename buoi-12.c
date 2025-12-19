#include <stdio.h>
#include <string.h>

int main() {
	
	/*
	    String (chuoi): Mang cac ky tu
	*/
	
//	char str[1000]; // Khai bao
//	char str[1000] = "La Thanh Tai";
//	printf(" %s", str);

//    char name[1000];
//    printf("Nhap ho va ten: ");
////  scanf(" %s", name);
//    fgets(name, sizeof(name), stdin);
//    
//    printf("Ho ten la: %s", name);

    char str[] = "Hello World";
//  printf(" %d", sizeof(str));
//  printf("Ky tu dau tien la: %c\n", str[0]);
//  printf("Ky tu cuoi cung la: %c\n", str[4]);
    
    // Luu y: Trong C, vi tri cuoi la la '\0' danh dau su ket thuc
    // cua chuoi
    
//  int i;
//  for(i = 0; i < 5; i++) {
//      printf(" %c\n", str[i]);
//	}

//  while(str[i] != '\0') {
//		i++;
//	}
//	
//	printf("So luong ky tu la: %d\n", i); // Ket qua la 11
//	printf("So luong ky tu la: %d", strlen(str));

    int i, count = 0;
    for(i = 0; i < strlen(str); i++) {
    	// Do dai cua str - 1 se la vi tri cuoi cung
    	int phanTuCuoi = strlen(str) - 1;
    	if(str[phanTuCuoi] == 'o') {
//    		printf("Co xuat hien ky tu o tai vi tri %d\n", i);
//    		break;
            count++;
		}
	}
	printf("Co %d ky tu o duoc tim thay", count);
	
	return 0;
}
