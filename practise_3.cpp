#include <iostream>
#include <string>

class Person {
  private: 
    std::string name;
    int age;
    std::string country;

  public:
    void setName(const std::string & n) {
      name = n;
    }

    void setAge(int a) {
      age = a;
    }

    void setCountry(const std::string & c) {
      country = c;
    }

    std::string getName() {
      return name;
    }

    int getAge() {
      return age;
    }

    std::string getCountry() {
      return country;
    }
};

int main() {
  Person person;

  person.setName("Saveli Sujatha");
  person.setAge(25);
  person.setCountry("USA");

  std::cout << "Name: " << person.getName() << std::endl;
  std::cout << "Age: " << person.getAge() << std::endl;
  std::cout << "Country: " << person.getCountry() << std::endl;

  return 0;
}
