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

