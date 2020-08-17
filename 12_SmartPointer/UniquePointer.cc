//#include <iostream>
//#include <memory>
//
//class ScopeTest
//{
//public:
//	ScopeTest(int val) : m_val(val)
//	{
//		std::cout << "Constructor: " << m_val << std::endl;
//	}
//
//	~ScopeTest()
//	{
//		std::cout << "Destructor!" << std::endl;
//	}
//
//	void test()
//	{
//		std::cout << "Test!" << std::endl;
//	}
//private:
//	int m_val;
//};
//
//void f1()
//{
//	std::unique_ptr<ScopeTest> t = std::make_unique<ScopeTest>(10);
//	t->test();
//}
//
//void f2()
//{
//	ScopeTest *t2 = new ScopeTest(10);
//	t2->test();
//}
//
//int main()
//{
//	f1();
//	std::cout << std::endl;
//	f2();
//
//	return 0;
//}