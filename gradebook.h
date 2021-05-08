#include <iostream>
#include <string>
class GradeBook
{
public:
	explicit GradeBook(std::string name);
		
	void setCourseName(std::string) ;
	std::string getCoursName() const ;
	void displayMessage()const;
	void determineAverage() const;
private:
 std::string courseName;
};
