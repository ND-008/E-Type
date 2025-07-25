#ifndef LESSON_H
#define LESSON_H

#include <string>
#include <vector>

class Lesson {
public:
    Lesson(const std::string& title, const std::string& content);
    void display() const;

private:
    std::string title;
    std::string content;
};

class LessonManager {
public:
    void addLesson(const Lesson& lesson);
    void viewLessons() const;

private:
    std::vector<Lesson> lessons;
};

#endif // LESSON_H