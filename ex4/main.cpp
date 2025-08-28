int somar(int a,int b){
	
	std::cout << (a+b);
	
}

int multi(int a,int b){
	
	std::cout << (a-b);
	
}

int main(int argc, char** argv) {
	int x, y;
	std::cin >> x;
	std::cin >> y;
	
	somar(x,y);
	std::cout << "\n";
	multi(x,y);
	
	return 0;
}
