#include <iostream>
#include <memory>


template<class T,int Slot,class... Arg>
std::shared_ptr<T> Singleton(Arg&&... A) {
	static std::shared_ptr<T> O = std::make_shared<T>(A...);
	return O;
}

int main() {
	auto A = Singleton<int, 0>(10);
	auto B = Singleton<int, 0>();

	std::cout << *A << std::endl;
	std::cout << *B << std::endl;
	return 0;
}