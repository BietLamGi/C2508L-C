#include <stdio.h>

int main() {
    
	// Cau 1
//	int n;
//  printf("Nhap so (1-3): ");
//  scanf(" %d", &n);
//
//  if(n == 1 || n == 2 || n == 3) {
//      switch(n) {
//          case 1:
//              printf("*");
//              break;
//          case 2:
//              printf("**");
//              break;
//          case 3:
//              printf("***");
//      }
//	} else {
//		printf("So ban nhap khong phai la 1, 2, 3.");
//	}
    
    // Cau 2
//  int thu;
//  printf("Nhap vao thu: ");
//  scanf(" %d", &thu);
//
//  switch(thu) {
//      case 1: printf("Thu Hai"); break;
//      case 2: printf("Thu Ba"); break;
//      case 3: printf("Thu Tu"); break;
//      case 4: printf("Thu Nam"); break;
//      case 5: printf("Thu Sau"); break;
//      case 6: printf("Thu Bay"); break;
//      case 7: printf("Chu Nhat"); break;
//      default:
//          printf("Thu khong hop le!");
//  }
    
    // Cau 3
//  int thang;
//  printf("Nhap thang: ");
//  scanf(" %d", &thang);
//
//  if(thang >= 1 && thang <= 12) {
//      switch(thang) {
//          case 1: case 2: case 3:
//              printf("Quy 1");
//              break;
//          case 4: case 5: case 6:
//              printf("Quy 2");
//              break;
//          case 7: case 8: case 9:
//              printf("Quy 3");
//              break;
//          case 10: case 11: case 12:
//              printf("Quy 4");
//      }
//	} else {
//		printf("Thang khong hop le!");
//	}
    
    // Xay dung menu 2 cap
    
//    Chuong trinh doc truyen 'Thien long Bat Bo'
//    
//    1. Chuong 1
//    2. Chuong 2
//    3. Chuong 3
//    4. Chuong 4
//    
//    Moi ban nhap so chuong (1-4):
//    	
//    1. Chuong 1 - Tap 1
//    2. Chuong 1 - Tap 2
//    3. Chuong 1 - Tap 3
//    
//    Moi ban nhap so tap (1-3):
//    	
//    Nguoi dung nhap so 1 => In ra dong chu ban da chon "Chuong 1 - Tap 1"
    
//  int chuong, tap;
//  printf("Chuong trinh doc truyen 'Thien long Bat Bo'\n");
//  printf("\n");
//  printf("1. Chuong 1 \n");
//  printf("2. Chuong 2 \n");
//  printf("3. Chuong 3 \n");
//  printf("4. Chuong 4 \n");
//  printf("\n");
//  printf("Moi ban nhap so chuong (1-4): \n");
//  scanf(" %d", &chuong);
//    
//  switch(chuong) {
//    	case 1:
//    	    printf("1. Chuong 1 - Tap 1 \n");
//          printf("2. Chuong 1 - Tap 2 \n");
//          printf("3. Chuong 1 - Tap 3 \n");
//          printf("Moi ban nhap so tap (1-3): \n");
//          scanf(" %d", &tap);
//          printf("Ban da chon chuong %d tap %d", chuong, tap);
//          break;
//      case 2:
//    		printf("1. Chuong 2 - Tap 1 \n");
//          printf("2. Chuong 2 - Tap 2 \n");
//          printf("3. Chuong 2 - Tap 3 \n");
//          printf("Moi ban nhap so tap (1-3): \n");
//          scanf(" %d", &tap);
//          printf("Ban da chon chuong %d tap %d", chuong, tap);
//          break;
//      case 3:
//    	    printf("1. Chuong 3 - Tap 1 \n");
//          printf("2. Chuong 3 - Tap 2 \n");
//          printf("3. Chuong 3 - Tap 3 \n");
//          printf("Moi ban nhap so tap (1-3): \n");
//          scanf(" %d", &tap);
//          printf("Ban da chon chuong %d tap %d", chuong, tap);
//          break;
//      case 4:
//    		printf("1. Chuong 4 - Tap 1 \n");
//          printf("2. Chuong 4 - Tap 2 \n");
//          printf("3. Chuong 4 - Tap 3 \n");
//          printf("Moi ban nhap so tap (1-3): \n");
//          scanf(" %d", &tap);
//          printf("Ban da chon chuong %d tap %d", chuong, tap);
//	}

    // Vong lap for
    // In ra man hinh cac so tu 1 - 10
    // i: index (chi muc)
    // Bieu thuc 1: Chi chay 1 lan duy nhat trong vong lap for
//  int i;
//  for(i = 1; i <= 10; i++) {
//    	continue;
//    	printf(" %d \n", i);
//  }
	
	// Co cach nao khac de thoat khoi vong lap for khong?
	// Dung break
	
	// Bai tap 1
	// In ra man hinh cac so chan tu 1 - 10
	
//	int i;
//	for(i = 1; i <= 10; i++) {
//		if(i % 2 == 0) {
//			printf("% d \n", i);
//		}
//	}

//  for(i = 2; i <= 10; i = i + 2) {
//      printf(" %d \n", i);
//	}

    // Bai tap 2: Tinh tong tu 1 - n voi n nhap tu ban phim
    
//  int n, i;
//	int tong = 0;
//  printf("Nhap n: ");
//  scanf(" %d", &n);
//  for(i = 1; i <= n; i++) {
//    	tong = tong + i;
//	}
//  printf("Tong la: %d", tong);
    
    // Bai tap 3: Tinh tong cac so le tu 1 - n voi n nhap tu ban phim
//  int n, tong = 0, i;
//  printf("Nhap n: ");
//  scanf(" %d", &n);
//  for(i = 1; i <= n; i = i + 2) {
//    	tong = tong + i;
//    	tong += i;
//	}
//	printf("Tong la: %d", tong);
	
	// Bai tap 4: Tinh tong cac so chan tu 1 - n voi n nhap tu ban phim
	
//	int n, tong = 2, i;
//  printf("Nhap n: ");
//  scanf(" %d", &n);
//  for(i = 0; i <= n; i = i + 2) {
//    	tong = tong + i;
//    	tong += i;
//	}
//	printf("Tong la: %d", tong);

    // Vong lap while
// While(condition) {
//     // Code block
// }

//  int n = 1;
//  while(n <= 10) {
//      printf(" %d", n);
//    	n++;
//	}
	
	// Vong lap do while
//	do {
//		// Block code
//	} while(condition)

//  int n = 0;
//  do {
//    	printf("Hello \n");
//    	n++;
//	} while(n <= 10);

//  for( ; ; ) {
//    	printf("Hello");
//	}

//  int i;
//  for(i = 0; ; ) {
//    	printf("Hello");
//	}
	
	// Bai tap: Su dung vong lap do while de in ra cac so 1 - 10 (khong in ra so 2)
	
	int i = 1;
	do {
		if(i != 2) {
			printf(" %d \n", i);
		}
		i++;
	} while(i <= 10);
	
    
    return 0;
}
