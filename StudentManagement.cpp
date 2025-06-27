#include <iostream>
#include <string>
class Student {
protected:
  std::string name;
  long long int roll_no;

public:
  virtual void GetMark() = 0; //purevirtual function
  virtual void CalculateMark() = 0; 
  virtual void displayStudent() = 0;
};
class ScienceStudent : public Student {
private:
  int physics, maths, chemistry, social, pratical;

public:
  void GetMark()  {
    std::cout << "--------SCIENCE STUDENT DETAILS--------" << std::endl;
    std::cout << "Enter Your Name: ";
    std::cin >> name;
    std::cout << "Enter Your Roll.No: ";
    std::cin >> roll_no;
    std::cout << "Enter Your Physics Mark: ";
    std::cin >> physics;
    std::cout << "Enter Your Maths Mark: ";
    std::cin >> maths;
    std::cout << "Enter Your Chemistry Mark: ";
    std::cin >> chemistry;
    std::cout << "Enter Your Social Mark: ";
    std::cin >> social;
    std::cout << "Enter your Pratical Mark: ";
    std::cin >> pratical;
  }
  void CalculateMark()  {
    int total = physics + maths + chemistry + social + pratical;
    float percentage = total / 5.0;

    std::cout << "Total Mark: " << total << "/500" << std::endl;
    std::cout << "Percentage: " << percentage << "%" << std::endl;

    if (percentage >= 90.0 && percentage <= 100.0) {
      std::cout << "Grade: A+" << std::endl;
    } else if (percentage >= 80.0 && percentage <= 89.0) {
      std::cout << "Grade: A" << std::endl;
    } else if (percentage >= 70.0 && percentage <= 79.0) {
      std::cout << "Grade: B+" << std::endl;
    } else if (percentage >= 60.0 && percentage <= 69.0) {
      std::cout << "Grade: B" << std::endl;
    } else if (percentage >= 50.0 && percentage <= 59.0) {
      std::cout << "Grade: C" << std::endl;
    } else {
      std::cout << "Grade: Fail" << std::endl;
    }
  }
  void displayStudent()  {
    std::cout << "----------STUDENT INFO----------" << std::endl;
    std::cout << std::endl;
    std::cout << "NAME: " << name << std::endl;
    std::cout << "ROLL NO: " << roll_no << std::endl;
    std::cout << std::endl;
    std::cout << "---------------------------------" << std::endl;
  }
};
class CommerceStudent : public Student {
private:
  int commerce, statics, economic, businessMaths;

public:
  void GetMark()  {
    std::cout << "-------COMMERCE STUDENT-------" << std::endl;
    std::cout << "Enter Your Name: ";
    std::cin >> name;
    std::cout << "Enter Your Roll.No: ";
    std::cin >> roll_no;
    std::cout << "Enter Your Commerce Mark: ";
    std::cin >> commerce;
    std::cout << "Enter Your Statics Mark: ";
    std::cin >> statics;
    std::cout << "Enter Your Economic Mark: ";
    std::cin >> economic;
    std::cout << "Enter Your BusinessMaths: ";
    std::cin >> businessMaths;
  }
  void CalculateMark()  {
    int total = commerce + statics + economic + businessMaths;
    float percentage = total / 4.0;

    std::cout << "Total Mark: " << total << "/400" << std::endl;
    std::cout << "Percentage: " << percentage << "%" << std::endl;

    if (percentage >= 90.0 && percentage <= 100.0) {
      std::cout << "Grade: A+" << std::endl;
    } else if (percentage >= 80.0 && percentage <= 89.0) {
      std::cout << "Grade: A" << std::endl;
    } else if (percentage >= 70.0 && percentage <= 79.0) {
      std::cout << "Grade: B+" << std::endl;
    } else if (percentage >= 60.0 && percentage <= 69.0) {
      std::cout << "Grade: B" << std::endl;
    } else if (percentage >= 50.0 && percentage <= 59.0) {
      std::cout << "Grade: C" << std::endl;
    } else {
      std::cout << "Grade: Fail" << std::endl;
    }
  }
  void displayStudent()  {
    std::cout << "----------STUDENT INFO----------" << std::endl;
    std::cout << "NAME: " << name << std::endl;
    std::cout << "ROLL NO: " << roll_no << std::endl;
    std::cout << "---------------------------------" << std::endl;
  }
};
int main() {
  Student *std;
  int choice;
  std::cout << "1. ScienceStudent"
            << "\n"
            << "2. CommerceStudent" << '\n';
  std::cout << "Enter Your Choice: ";
  std::cin >> choice;
  if (choice == 1) {
    std = new ScienceStudent();
  } else if (choice == 2) {
    std = new CommerceStudent();
  } else {
    std::cout << "Invalid Input!! Please Check!!" << std::endl;
  }
  std::cout << "**********************************" << std::endl;
  std::cout << std::endl;
  std->GetMark();
  std->CalculateMark();
  std->displayStudent();
  std::cout << std::endl;
  std::cout << "**********************************" << std::endl;
}
