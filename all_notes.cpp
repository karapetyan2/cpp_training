#include <iostream>
/*
int main() {
	std::cout << "Hello World" << std::endl;
	return 0;
}
*/

/*int main() {

	int x{};
	return 0;
}
*/


/*int main() {

	int x{2};
	int y{3};
	std::cout << (x + y);
	std::cout << "";
//	return 0;
}
*/


/*int main() {
	
	int z{1};
	int t{9};
	std::cout << (z + t) << std::endl; 
	std::cout << (z - t) << std::endl; 
	std::cout << (z * t) << std::endl; 
	std::cout << (z / t) << std::endl; 
	return 0;
}
*/

/*
int main() {

	int x{};
	int y{};
	std::cin >> x >> y;
	std::cout << (x + y) << std::endl; 
	std::cout << (x - y) << std::endl; 
	std::cout << (x * y) << std::endl; 
	std::cout << (x / y) << std::endl; 
	std::cout << (x % y) << std::endl; 

}
*/

/*
int main() {

	int x{};
	int y{};
	std::cout << "Pleas type first number" << std::endl;
	std::cin >> x;
	std::cout << "Pleas type second number" << std::endl;
        std::cin >> y;
	//std::cout << (x + y) << std::endl;
	int z = (x + y);
	std::cout << "es el bajanarar!" << std::endl;
	int k = (z / 2);
	//std::cout << z;
	std::cout <<  k << std::endl;
	//std::cout <<  z << std::endl;
	//std::cout << z;
	return 0;

}
*/

/*
int main() {

	int x{};
	int y{};

	std::cin >> x >> y;

	int num{x + y};
	//std::cin >> x >> y;
	//std::cout << (x + y) /2 << std::endl;
	std::cout << (num / 2.0) << std::endl;
}
*/

/*
int main() {
	
	int x{};
	int y{};
	
	//std::cin >> x >> y;
	std::cout << "Pleas type first number" << std::endl;
	std::cin >> x;
	std::cout << "Pleas type second number" << std::endl;
        std::cin >> y;
	int z=(x * y);
	int a=(x + y);
	
	std::cout << "The result is "<< (z - a) << std::endl;
	return 0;
}
*/

/*
int main() {
	
	int a{};
	std::cout << "Pleas input number" ;
	std::cin >> a ;
	int b{ a % 10};
	
	int c{ a / 10};

	std::cout << "This result is: " << b << std::endl;
	std::cout << "This is / result: " << c << std::endl;
	return 0;
}

int main() {

	int a{}; //es tivn a nermucac
	std::cin >> a ;

	int h{ a / 100};
	int t{ a / 10 % 10};
	int m{ a % 10};
//      int t{ ft / 10};

	std::cout << "This is haryuravor " << h << std::endl;
//	std::cout << "This is fake tasnavor " << ft << std::endl;
	std::cout << "This is tasnavor "  << t << std::endl;
	std::cout << "THis is miavor " << m << std::endl;
	int n = (h + t + m);
        std::cout << "es el tvyri gumar "  << n << std::endl;
	return 0;
}

*/
 
/*
int main() {
	int x{1};

	x = x + 18;
	std::cout << "This is x: " << x << std::endl;
	return 0;
}

*/

//	CHAR-ը դա   տ իպ   ա  նա խ ա տ եսվա ծ ա  սիմվոլները պ ա հելու հա մա ր 
//      arjeqneri qanaky 2^8=256 hat, 
//      mijakayqy   2^8 = 256 - 1

/*
int main() {
	char a{'A'}; //simbols {'a', '7'}
	std:: cout << a << std::endl;

	a = a + 1;

	std:: cout << ('A' - 0) << std::endl; //A simboli tvayin arjeq@


	return 0;


}

*/

// bool-ինի հա մա ր default ա րժեքը false-ն ա 
// կա մա յա կան թվա յին ա րժեք b = 3 որը 0 չի true ա 
/*
int main() {
	bool b{};
	return 0;

}
*/


// ############ TIPS ############
// int
// char, wchar_t
// bool
// void
// float, double
//
// կոչվում են ֆունդամենտալ կամ ներդրված տիպեր
//


int main() {
	int x{};	
	std::cout << "Pleas type number" << std::endl;
	std::cin >> x;
        if( x % 2 == 0) {
		std::cout << "this is zuyg result" << std::endl;       
        }
	else {
		std::cout << "this is kent result" << std::endl;
	}



}




