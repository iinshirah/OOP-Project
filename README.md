# Career Craft — Career Advisor & Resume Generator

Career Craft is a **C++ Object-Oriented Programming (OOP) project** that combines a career recommendation system with a simple resume generator.

The application collects the user's personal, academic, and professional information, allows them to either take a career-interest quiz or manually select a career field, provides career recommendations and useful tips, and finally generates a personalized resume. The resume is displayed in the console and automatically saved as a `.txt` file.

The project demonstrates practical use of **abstraction, inheritance, polymorphism, method overriding, dynamic memory allocation, input validation, and file handling** in C++.

---

## Features

* Collects user information including:

  * Name
  * Age
  * Qualification
  * Email
  * Phone number
  * Skills
  * Experience
  * Hobbies
  * Languages
  * Resume date

* Provides two career-selection options:

  * **Career Interest Quiz**
  * **Manual Career Field Selection**

* Supports seven career fields:

  * IT
  * Medical
  * Business
  * Arts & Design
  * Engineering
  * Education
  * Journalism

* Provides career recommendations based on the selected field.

* Displays useful career-specific tips.

* Generates a personalized career objective.

* Displays the completed resume in the console.

* Automatically saves the resume as a `.txt` file.

* Includes basic age validation.

* Provides default experience text when no experience is entered.

---

## OOP Concepts Demonstrated

| Concept                       | Implementation                                                                      |
| ----------------------------- | ----------------------------------------------------------------------------------- |
| **Abstraction**               | `CareerAdvisor` is an abstract base class containing pure virtual functions.        |
| **Inheritance**               | Career classes inherit from the `CareerAdvisor` base class.                         |
| **Polymorphism**              | A `CareerAdvisor*` pointer is used to access different career objects at runtime.   |
| **Method Overriding**         | Each career class provides its own implementation of the virtual functions.         |
| **Dynamic Memory Allocation** | Career objects are created dynamically using `new`.                                 |
| **Virtual Destructor**        | The base class contains a virtual destructor for proper cleanup of derived objects. |
| **Class-Based Design**        | User information and career-related operations are organized into separate classes. |

---

## How the Application Works

```text
Start
  │
  ▼
Collect User Information
  │
  ▼
Choose Career Selection Method
  │
  ├── Career Interest Quiz
  │        │
  │        ▼
  │   Select Career
  │
  └── Manual Selection
           │
           ▼
      Select Career Field
           │
           ▼
  Display Career Recommendations
           │
           ▼
       Give Career Tips
           │
           ▼
     Generate Career Objective
           │
           ▼
      Generate Resume
           │
           ▼
   Display Resume + Save .txt
           │
           ▼
          End
```

---

## Career Fields

| Career Field      | Example Careers                                    | Main Focus                                 |
| ----------------- | -------------------------------------------------- | ------------------------------------------ |
| **IT**            | Software Developer, Data Scientist, Web Developer  | Technology and programming                 |
| **Medical**       | Doctor, Surgeon, Pharmacist                        | Healthcare and medicine                    |
| **Business**      | Entrepreneur, Marketing Manager, Financial Analyst | Business and management                    |
| **Arts & Design** | Graphic Designer, Animator, UI/UX Designer         | Creativity and visual design               |
| **Engineering**   | Mechanical, Civil, Electrical Engineer             | Technical and mathematical problem-solving |
| **Education**     | Teacher, Lecturer, Curriculum Designer             | Teaching and learning                      |
| **Journalism**    | Reporter, Content Writer, News Anchor              | Writing and media                          |

---

## Project Structure

```text
Career-Craft/
│
├── CareerCraft.cpp
├── README.md
└── Resume_<name>.txt
```

The `Resume_<name>.txt` file is generated automatically when the program runs.

For example:

```text
Resume_Momina.txt
```

---

## Technologies Used

* **Language:** C++
* **Programming Paradigm:** Object-Oriented Programming
* **Compiler:** Any standard C++ compiler
* **Libraries:**

  * `<iostream>` — Console input and output
  * `<fstream>` — File creation and writing

---

## Requirements

To run the project, you need:

* A C++ compiler
* A code editor or IDE such as:

  * Visual Studio Code
  * Code::Blocks
  * Dev-C++
  * Visual Studio
  * CLion

No external libraries or packages are required.

---

## How to Run

### 1. Clone the Repository

```bash
git clone https://github.com/your-username/Career-Craft.git
```

### 2. Open the Project

Open the project folder in your preferred C++ IDE or code editor.

### 3. Compile the Program

Using `g++`:

```bash
g++ CareerCraft.cpp -o CareerCraft
```

### 4. Run the Program

**Windows:**

```bash
CareerCraft.exe
```

**Linux/macOS:**

```bash
./CareerCraft
```

---

## Example Workflow

When the program starts, the user enters their personal information:

```text
Enter your name: Momina
Enter your age: 20
Enter your qualification: BS Computer Science
Enter your email: example@email.com
Enter your phone number: 03XXXXXXXXX
Enter resume date: 2025-06-15
```

The program then provides two options:

```text
Choose an option:
1. Take a quiz
2. Select career field manually
```

### Career Quiz

If the quiz option is selected, the program asks a series of yes/no questions related to different career interests.

For example:

```text
1. Do you enjoy coding or working with technology?
2. Are you interested in biology or helping patients?
3. Do you like managing or starting businesses?
```

The system selects the **first career field for which the user answers `yes`**. If no matching interest is selected, Journalism is used as the default career field.

### Manual Selection

The user can also directly select one of the available career fields.

After the career is selected, the program:

1. Displays recommended careers.
2. Provides career-specific tips.
3. Generates a career objective.
4. Adds the objective to the user's resume.
5. Displays the completed resume.
6. Saves the resume as a `.txt` file.

---

## Resume Generation

Career Craft generates a personalized text-based resume containing:

* Personal information
* Qualification
* Career objective
* Skills
* Experience
* Hobbies
* Languages
* Resume date
* Signature

The resume is displayed in the console and saved automatically.

Example:

```text
Resume_Momina.txt
```

---

## Input Validation

The application includes basic validation for the user's age.

The accepted age range is:

```text
15–80
```

If the user enters an invalid age or non-numeric input, the program clears the input error and asks for the age again.

If no experience is entered, the program automatically uses:

```text
No formal experience. Actively learning.
```

The program also counts only non-empty skills, hobbies, and languages when displaying the resume.

---

## Key Implementation

The `CareerAdvisor` class acts as the abstract base class:

```cpp
class CareerAdvisor {
public:
    virtual void recommendCareer() = 0;
    virtual void giveTips() = 0;
    virtual string getObjective() = 0;
    virtual ~CareerAdvisor() {}
};
```

Different career classes inherit from this class and implement the required functions.

For example:

```cpp
class ITCareer : public CareerAdvisor {
public:
    void recommendCareer() override {
        // IT career recommendations
    }

    void giveTips() override {
        // IT career tips
    }

    string getObjective() override {
        return "Seeking a challenging role in IT to apply and enhance my technical skills.";
    }
};
```

A base-class pointer is then used to work with different career objects:

```cpp
CareerAdvisor* advisor;
```

This demonstrates **runtime polymorphism**, as the same pointer can refer to different derived career classes.

---

## Learning Outcomes

Through this project, the following concepts were practiced:

* Classes and objects
* Abstract classes
* Pure virtual functions
* Inheritance
* Runtime polymorphism
* Method overriding
* Virtual destructors
* Dynamic memory allocation
* Pointers
* Arrays and strings
* Conditional statements
* Loops
* Input validation
* File handling using `fstream`
* Console-based application development
* Applying OOP to a practical problem

---

## Future Improvements

The project can be further enhanced by adding:

* A scoring-based career assessment system
* More detailed career-interest questions
* More career fields and specializations
* Stronger email and phone-number validation
* Editable user information before resume generation
* Multiple resume templates
* PDF resume generation
* A graphical user interface
* Database integration for storing user profiles
* More advanced career recommendations based on multiple user responses

---

## Conclusion

Career Craft demonstrates how **C++ Object-Oriented Programming concepts can be combined to build a practical console-based application**.

The project brings together career guidance, user data collection, resume generation, input validation, and file handling in a single system. Its use of abstraction, inheritance, polymorphism, and dynamic memory allocation provides practical experience with important OOP principles.

Overall, the project provides a strong foundation for understanding how OOP concepts can be applied to real-world software problems while leaving room for future improvements such as intelligent career assessment, graphical interfaces, database integration, and automated resume generation.
