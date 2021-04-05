#include <string>

using namespace std;

class HeartRates
{
	private:
		std::string firstName;
		std::string lastName;
		int month, day, year;

	public:

		HeartRates(string first, string last, int month, int day, int year);
		void setFirstName(std::string);
		std::string getFirstName() const;

		void setLastName(std::string);
		std::string getLastName() const;
		
		void setMonth(int month);
		int getMonth() const;
		
		void setDay(int day);
		int getDay() const;
		
		void setYear(int year);
		int getYear() const;

		int getAge();
		int getMaxHeartRate(int age);
		void getTargetHeartRate(int max);
};
