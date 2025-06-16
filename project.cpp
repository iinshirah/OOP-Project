#include <iostream>
#include <fstream>
using namespace std;

// Abstract Base Class
class CareerAdvisor {
public:
//Pure virtual functions
    virtual void recommendCareer() = 0;
    virtual void giveTips() = 0;
    virtual string getObjective() = 0;
    virtual ~CareerAdvisor() {}  // Virtual destructor – allows proper cleanup of derived class objects through base class pointer
};

// Career Field Classes

class ITCareer : public CareerAdvisor {          //Child class 1
public:
   void recommendCareer() override {
        cout << "\n Recommended IT Careers:\n";
        cout << "- Software Developer\n- Data Scientist\n- Cybersecurity Expert\n- Web Developer\n";
  }
    void giveTips() override {
        cout << " Tips:\n";
        cout << " - Learn C++/Python and build projects.\n";
        cout << " - Explore latest tech trends.\n";
        cout << " - Create GitHub profile.\n";
        cout << " - Improve problem-solving skills.\n";
    }
    string getObjective() override {
        return "Seeking a challenging role in IT to apply and enhance my technical skills.";
    }
};

class MedicalCareer : public CareerAdvisor {      //Child class 2
public:
    void recommendCareer() override {
        cout << "\n Recommended Medical Careers:\n";
        cout << "- Doctor\n- Surgeon\n- Pharmacist\n- Physiotherapist\n";
    }
    void giveTips() override {
        cout << " Tips:\n";
        cout << " - Study biology seriously.\n";
        cout << " - Gain clinical experience.\n";
        cout << " - Learn medical ethics.\n";
        cout << " - Improve communication with patients.\n";
    }
    string getObjective() override {
        return "Aspiring to contribute in the medical field by delivering quality healthcare.";
    }
};

class BusinessCareer : public CareerAdvisor {      //Child class 3
public:
    void recommendCareer() override {
        cout << "\n Recommended Business Careers:\n";
        cout << "- Entrepreneur\n- Marketing Manager\n- Financial Analyst\n- HR Specialist\n";
    }
    void giveTips() override {
        cout << " Tips:\n";
        cout << " - Master market research.\n";
        cout << " - Build strong communication skills.\n";
        cout << " - Understand finance basics.\n";
        cout << " - Develop leadership qualities.\n";
    }
    string getObjective() override {
        return "Eager to utilize business acumen to drive organizational growth.";
    }
};

class ArtsDesignCareer : public CareerAdvisor {        //Child class 4
public:
    void recommendCareer() override {
        cout << "\n Recommended Arts & Design Careers:\n";
        cout << "- Graphic Designer\n- Interior Designer\n- Animator\n- UI/UX Designer\n";
    }
    void giveTips() override {
        cout << " Tips:\n";
        cout << " - Build a strong portfolio.\n";
        cout << " - Learn Adobe tools.\n";
        cout << " - Practice creativity daily.\n";
        cout << " - Study color theory and layout.\n";
    }
    string getObjective() override {
        return "Passionate about creating artistic solutions.";
    }
};

class EngineeringCareer : public CareerAdvisor {      //Child class 5
public:
    void recommendCareer() override {
        cout << "\n Recommended Engineering Careers:\n";
        cout << "- Mechanical Engineer\n- Civil Engineer\n- Electrical Engineer\n- Software Engineer\n";
    }
    void giveTips() override {
        cout << " Tips:\n";
        cout << " - Learn mathematics deeply.\n";
        cout << " - Practice CAD and simulations.\n";
        cout << " - Improve technical writing.\n";
        cout << " - Do mini engineering projects.\n";
    }
    string getObjective() override {
        return "Driven to solve engineering challenges.";
    }
};

class EducationCareer : public CareerAdvisor {       //Child class 6
public:
    void recommendCareer() override {
        cout << "\n Recommended Education Careers:\n";
        cout << "- Teacher\n- Lecturer\n- Educational Consultant\n- Curriculum Designer\n";
    }
    void giveTips() override {
        cout << " Tips:\n";
        cout << " - Improve presentation skills.\n";
        cout << " - Be patient and adaptive.\n";
        cout << " - Understand student needs.\n";
        cout << " - Use visual teaching aids.\n";
    }
    string getObjective() override {
        return "Committed to fostering growth through education.";
    }
};

class JournalismCareer : public CareerAdvisor {        //Child class 7
public:
    void recommendCareer() override {
        cout << "\n Recommended Journalism Careers:\n";
        cout << "- Reporter\n- Content Writer\n- News Anchor\n- Copy Editor\n";
    }
    void giveTips() override {
        cout << " Tips:\n";
        cout << " - Practice writing daily.\n";
        cout << " - Stay updated with news.\n";
        cout << " - Learn investigative skills.\n";
        cout << " - Build a personal blog.\n";
    }
    string getObjective() override {
        return "Aspiring to deliver truthful and engaging news to the public.";
    }
};

// User Class
class User {
public:
    string name, qualification, email, phone;
    int age;
    string skills[3], hobbies[2], languages[2], experience;
    string objective, resumeDate;
    int skillCount = 0, hobbyCount = 0, langCount = 0;

    void collectData() {
        cout << "Enter your name: ";
        getline(cin, name);
      

          while (true) {
            cout << "Enter your age: ";
            cin >> age;
            if (cin.fail() || age < 15 || age > 80)  //cin.fail() Check if user entered invalid (non-numeric) input
             {
                cin.clear();                        // Clears the error flag so cin can accept input again
                cin.ignore(1000, '\n');             // Discards up to 1000 characters or until a newline is found
                cout << "Invalid age! Please enter a valid age (15-80).\n";
            } else {
                cin.ignore();
                break;
            }
        }

        cout << "Enter your qualification: ";
        getline(cin, qualification);
        cout << "Enter your email: ";
        getline(cin, email);
        cout << "Enter your phone number: ";
        getline(cin, phone);
        cout << "Enter resume date (e.g., 2025-06-15): ";
        getline(cin, resumeDate);

        cout << "Enter up to 3 skills:\n";
        for (int i = 0; i < 3; ++i) {
            cout << "Skill " << (i + 1) << ": ";
            getline(cin, skills[i]);
            if (skills[i] != "")  // Increase skill count if input is not empty
             skillCount++;

        }

        cout << "Describe your experience: ";
        getline(cin, experience);
         if (experience == "")  // check if user entered nothing
            experience = "No formal experience. Actively learning.";

        cout << "Enter 2 hobbies:\n";
        for (int i = 0; i < 2; ++i) {
            cout << "Hobby " << (i + 1) << ": ";
            getline(cin, hobbies[i]);
          if (hobbies[i] != "") hobbyCount++;  // Increase hobbyCount only if user entered something

        }

        cout << "Enter 2 languages you speak:\n";
        for (int i = 0; i < 2; ++i) {
            cout << "Language " << (i + 1) << ": ";
            getline(cin, languages[i]);
         if (languages[i] != "") langCount++;  // Count language only if input is not empty


        }
    }

  void printResume() {
  
    ofstream file("Resume_" + name + ".txt");   // Open a file named "Resume_<name>.txt" to save resume data

    
    // Print resume header and personal details on the screen
    cout << "\n========== Resume ==========\n";
    cout << "Name       : " << name << "\n";
    cout << "Age        : " << age << "\n";
    cout << "Qualification: " << qualification << "\n";
    cout << "Email      : " << email << "\n";
    cout << "Phone      : " << phone << "\n";
    cout << "Date       : " << resumeDate << "\n";
    cout << "----------------------------\n";
    cout << "Objective  : " << objective << "\n";
    cout << "----------------------------\nSkills:\n";
       for (int i = 0; i < skillCount; ++i) {
        cout << "- " << skills[i] << "\n";
    }
     cout << "Experience : " << experience << "\n";

    if (hobbyCount > 0) {
        cout << "Hobbies:\n";
        for (int i = 0; i < hobbyCount; ++i) {
            cout << "- " << hobbies[i] << "\n";
        }
    }

   
    if (langCount > 0) {
        cout << "Languages:\n";
        for (int i = 0; i < langCount; ++i) {
            cout << "- " << languages[i] << "\n";
        }
    }
         //Footer 
    cout << "----------------------------\n";
    cout << "Signature  : " << name << "\n";
    cout << "============================\n";

         //  Writing  same data to the file

    file << "\n========== Resume ==========\n";
    file << "Name       : " << name << "\n";
    file << "Age        : " << age << "\n";
    file << "Qualification: " << qualification << "\n";
    file << "Email      : " << email << "\n";
    file << "Phone      : " << phone << "\n";
    file << "Date       : " << resumeDate << "\n";
    file << "----------------------------\n";
    file << "Objective  : " << objective << "\n";
    file << "----------------------------\nSkills:\n";

    for (int i = 0; i < skillCount; ++i) {
        file << "- " << skills[i] << "\n";
    }

    file << "Experience : " << experience << "\n";

    if (hobbyCount > 0) {
        file << "Hobbies:\n";
        for (int i = 0; i < hobbyCount; ++i) {
            file << "- " << hobbies[i] << "\n";
        }
    }

    if (langCount > 0) {
        file << "Languages:\n";
        for (int i = 0; i < langCount; ++i) {
            file << "- " << languages[i] << "\n";
        }
    }

    file << "----------------------------\n";
    file << "Signature  : " << name << "\n";
    file << "============================\n";

    
    file.close();  //Closing file 

    cout << "\nResume also saved as: Resume_" << name << ".txt\n";  // Tell the user that resume is saved in the file
   
}

    
};

// CareerQuiz class to handle the quiz logic
class CareerQuiz {
public:
    CareerAdvisor* run() { //It will return a pointer to an object of a class that inherits from CareerAdvisor
        string answer;
        cout << "\nAnswer the questions (yes/no):\n";

        cout << "1. Do you enjoy coding or working with technology? ";
        getline(cin, answer);
        if (answer == "yes") return new ITCareer();

        cout << "2. Are you interested in biology or helping patients? ";
        getline(cin, answer);
        if (answer == "yes") return new MedicalCareer();

        cout << "3. Do you like managing or starting businesses? ";
        getline(cin, answer);
        if (answer == "yes") return new BusinessCareer();

        cout << "4. Are you artistic or creative in visual work? ";
        getline(cin, answer);
        if (answer == "yes") return new ArtsDesignCareer();

        cout << "5. Do you enjoy solving technical or math problems? ";
        getline(cin, answer);
        if (answer == "yes") return new EngineeringCareer();

        cout << "6. Are you passionate about teaching and learning? ";
        getline(cin, answer);
        if (answer == "yes") return new EducationCareer();

        cout << "\nNo strong interest found. Default career: Journalism.\n";
        return new JournalismCareer();
    }
};
int main() {
    User user;  
    user.collectData();

    CareerAdvisor* advisor = nullptr; // Create a pointer named advisor that can point to any object of type CareerAdvisor
    int choice;

    while (true) {
        cout << "\nChoose an option:\n1. Take a quiz\n2. Select career field manually\nEnter your choice: ";
        cin >> choice;  // Variable to store user's choice
        cin.ignore();

        if (choice == 1) {
            CareerQuiz quiz;
            advisor = quiz.run();  // using the run() function  from CareerQuiz class
            break;
        } else if (choice == 2) {
            cout << "\nSelect field:\n";
            cout << "1. IT\n2. Medical\n3. Business\n4. Arts & Design\n5. Engineering\n6. Education\n7. Journalism\nChoice: ";
            cin >> choice;
            cin.ignore();  // Clear the input buffer
            switch (choice) {
                case 1: advisor = new ITCareer(); break;  //new is used to create an object dynamically(at runtime) and return a pointer to it.
                case 2: advisor = new MedicalCareer(); break;
                case 3: advisor = new BusinessCareer(); break;
                case 4: advisor = new ArtsDesignCareer(); break;
                case 5: advisor = new EngineeringCareer(); break;
                case 6: advisor = new EducationCareer(); break;
                case 7: advisor = new JournalismCareer(); break;
                default: cout << "Invalid. Defaulting to Journalism.\n"; advisor = new JournalismCareer(); break;
            }
            break;
        } else {
            cout << "Invalid input. Try again.\n";
        }
    }

    if (advisor) {
        advisor->recommendCareer();
        advisor->giveTips();
        user.objective = advisor->getObjective();
        delete advisor;  // delete is used to free the memory of that object when it's no longer needed
    }

    user.printResume();   // Display and save the resume
    return 0;
}
