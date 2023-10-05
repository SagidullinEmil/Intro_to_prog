# COM-122, Fall 2023: Course Directory

Here all the lab sources, online judges solutions, and projects should be stored
and submitted by the student to their private course repository. The repository
MUST be shared with the instructor and only with him. The student MUST commit
and push to GitHub periodically after finishing work on every lab problem, OJ
solution, or part of a project. The repository will be regularly checked by the
instructor or an automated script and graded. Ensure to keep the directory in
good order. Ensure to precisely follow the naming convention for directories,
files, and classes. Your grade will be lowered if the naming is incorrect and
the autograder fails to test your work. Do not share your work, and don't
plagiarize other people's work. Your repository will be checked for plagiarism
from time to time. In a case of a severe infraction, you will be reported to the
registrar's office and automatically fail the course.

## Checkpoint Grading

Your instructor will announce a periodic review of your work. You will be
awarded up to the following number of points for such checks:

* __Labs__: 10 point
* __Online Judges Solutions__: 10 points
* __Project 1__: 4 points
* __Project 2__: 4 points

In total, all the checkpoints cost *28 points* of your final grade.

## Required Software

Install the following software on your machine:

* [CLion](https://www.jetbrains.com/clion)
* [Git SCM](https://git-scm.com)

After that, clone this repository to your computer with CLion through Git.

## Code Style and Formatting

Points may be removed for not following the default IDE's code formatting rules.

## Naming Convention

Name files, directories and commits correctly. You may lose points if you do not
follow the naming rules.

### Commit Messages

Commit messages should briefly explain the nature of change. In addition,
project commits may contain a detailed commit description on a separate line.

#### Examples

```
Finish Problem 1 in Lab 1
Fix formatting in Problem 1 in Lab 1
Remove unnecessary files from Problem 1 in Lab 1
Finish Online Judge Problem 1 from <Name of the Online Judge System>
Add UI to select levels in Project 2
...
```

### Directory Names

You MUST use the following names for course directories:

* `lab01`
* `lab02`
* `lab03`
* `lab04`
* `lab05`
* `lab06`
* `lab07`
* `lab08`
* `pr01`
* `pr02`
* `ojmid`
* `ojfin`

### Lab and Online Judge Solution File Names

Your source file names MUST be named `p<NN>.cpp` where NN is the problem
number with the leading 0 in front if less than one digit is used.

#### Example

```bash
p01.cpp
p02.cpp
...
```

### Project File Names

File naming for projects will be explained in the project requirements.

### CMake Target Names

Inside of your main `CMakeLists.txt` each target MUST be named and specified as
follows:

* `lab01-p01`: `add_executable(lab01-p01 "${PROJECT_SOURCE_DIR}/lab01/p01.cpp")`
* `lab01-p02`: `add_executable(lab01-p02 "${PROJECT_SOURCE_DIR}/lab01/p02.cpp")`
* ...
* `lab02-p01`: `add_executable(lab02-p01 "${PROJECT_SOURCE_DIR}/lab02/p01.cpp")`
