#include <stdio.h>
#include <math.h>

int main() {
	
	// Cau 1
//	int a, b, c, max;
//	printf("Nhap a, b ,c: ");
//	scanf(" %d %d %d", &a, &b, &c);
//	
//	max = a;
//	if(b > max) {
//		max = b;
//	} 
//	if(c > max) {
//		max = c;
//	}
//	printf("So lon nhat la: %d", max);

    // Cau 2
//  int a;
//  printf("Nhap so a: ");
//  scanf(" %d", &a);
//    
//  if(a % 2 == 0 && a % 3 == 0) {
//    	printf("a chia het cho 2 va 3");
//	} else {
//		printf("a khong chia het cho 2 va 3");
//	}

    // Cau 3
//  int tuoi;
//  printf("Nhap tuoi: ");
//  scanf(" %d", &tuoi);
//    
//  if(tuoi >= 16) {
//    	printf("Du dieu kien hoc lop 10");
//	} else {
//		printf("Khong du dieu kien.");
//	}

    // Cau 4
//    double a, b, c, p ,s;
//    printf("Nhap do dai 3 canh a, b, c: ");
//    scanf(" %lf %lf %lf", &a, &b, &c);
//    
//    // Kiem tra dieu kien tam giac ton tai
//    if(a + b > c && a + c > b && c + b > a) {
//    	p = (a + b + c) / 2;
//    	s = sqrt(p * (p - a) * (p - b) * (p - c));
//    	printf("Dien tich tam giac la: %.2lf", s);
//	} else {
//		printf("Tam giac khong ton tai.");
//	}

    // Cau 5
//  float a, b, c, delta, x1, x2;
//  printf("Nhap a, b, c: ");
//  scanf(" %f %f %f", &a, &b, &c);
//
//  if(a == 0) {
//      if(b == 0)
//          printf("Phuong trinh vo nghiem");
//      else
//          printf("Phuong trinh co 1 nghiem: x = %.2f", -c / b);
//  } else {
//      delta = b * b - 4 * a * c;
//
//      if(delta < 0) {
//          printf("Phuong trinh vo nghiem");
//      } else if(delta == 0) {
//          printf("Phuong trinh co nghiem kep x = %.2f", -b / (2 * a));
//      } else {
//          x1 = (-b + sqrt(delta)) / (2 * a);
//          x2 = (-b - sqrt(delta)) / (2 * a);
//          printf("x1 = %.2f, x2 = %.2f", x1, x2);
//      }
//  }
    
    // Cau 6
//  int luong, thueThuNhap, thucLinh; 
//	printf("Nhap luong: ");
//  scanf(" %d", &luong);
//
//  if(luong > 0) {
//    	if(luong >= 15) {
//            thueThuNhap = luong * 0.3;
//        } else if(luong >= 7) {
//            thueThuNhap = luong * 0.2;
//        } else {
//            thueThuNhap = luong * 0.1;
//        }
//        thucLinh = luong - thueThuNhap;
//        printf("Thue phai dong: %d \n", thueThuNhap);
//        printf("Luong thuc linh: %d", thucLinh);
//  } else {
//		 printf("Luong ban nhap khong hop le");
//	}
	
	// Cau 7
//	float doanhSo, hoaHong;
//  printf("Nhap tong doanh so: ");
//  scanf(" %f", &doanhSo);
//
//  if(doanhSo > 0) {
//      if(doanhSo <= 100) {
//          hoaHong = 0.05 * doanhSo;
//      } else if(doanhSo <= 300) {
//          hoaHong = 0.1 * doanhSo;
//      } else {
//          hoaHong = 0.2 * doanhSo;
//      }
//      printf("Hoa hong nhan duoc: %.2f trieu", hoaHong);
//  } else {
//      printf("Doanh thu ban nhap khong hop le.");
//  }

	// Cau 8
//	int thang, nam;
//	printf("Nhap thang: ");
//	scanf(" %d", &thang);
//	printf("Nhap nam: ");
//	scanf(" %d", &nam);
//	
//	if(thang >= 1 && thang <= 12) {
//		if(thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
//          printf("Thang %d nam %d co 31 ngay", thang, nam);
//      } else if(thang == 4 || thang == 6 || thang == 9 || thang == 11) {
//          printf("Thang %d nam %d co 30 ngay", thang, nam);
//      } else {
//        	// Kiem tra nam nhuan
//        	if(nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0)) {
//        		printf("Thang %d nam %d co 29 ngay", thang, nam);
//			} else {
//				printf("Thang %d nam %d co 28 ngay", thang, nam);
//			}
//	    }
//  } else {
//    	printf("Thang ban nhap khong hop le.");
//	}

    // Cau 9
//  int tienCuoc = 25000, soPhut;
//  printf("Nhap so phut goi: ");
//  scanf(" %d", &soPhut);
//    
//  if(soPhut >= 0) {
//    	if(soPhut <= 10) {
//    	    tienCuoc = tienCuoc + (soPhut * 600);
//    	    // tienCuoc += soPhut * 600;
//	    } else if(soPhut <= 60) {
//		    tienCuoc = tienCuoc + (10 * 600) + ((soPhut - 10) * 400);
//	    } else {
//		    tienCuoc = tienCuoc + (10 * 600) + (50 * 400) + ((soPhut - 60) * 200);
//	    }
//	    printf("Tien cuoc ban phai tra la: %d", tienCuoc);
//	} else {
//		printf("So phut ban nhap khong hop le.");
//	}

    // Viet chuong trinh nhap vao so va in ra thu tuong ung.
    // Vd: Nhap so 2 => in 'Thu 2' (dung switch)
    
//    int n;
//    printf("Nhap n: ");
//    scanf(" %d", &n);
//    
//    switch(n) {
//    	case 2:
//    		printf("Thu 2");
//    		break;
//    	case 3:
//    		printf("Thu 3");
//    		break;
//    	case 4:
//    		printf("Thu 4");
//    		break;
//    	case 5:
//    		printf("Thu 5");
//    		break;
//    	case 6:
//    		printf("Thu 6");
//    		break;
//    	case 7:
//    		printf("Thu 7");
//    		break;
//    	default: // Cac truong hop con lai
//    		printf("Chu Nhat");
//	}

    // Cau 8 (Dung switch)
    
    int thang, nam;
	printf("Nhap thang: ");
	scanf(" %d", &thang);
	printf("Nhap nam: ");
	scanf(" %d", &nam);
	
	if(thang >= 1 && thang <= 12) {
		switch(thang) {
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				printf("Thang %d nam %d co 31 ngay", thang, nam);
				break;
			case 4: case 6: case 9: case 11:
				printf("Thang %d nam %d co 30 ngay", thang, nam);
				break;
			case 2:
				// Kiem tra nam nhuan
        	if(nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0)) {
        		printf("Thang %d nam %d co 29 ngay", thang, nam);
			} else {
				printf("Thang %d nam %d co 28 ngay", thang, nam);
			}
		}
	} else {
		printf("Thang ban nhap khong hop le.");
	}
    
	return 0;
}
