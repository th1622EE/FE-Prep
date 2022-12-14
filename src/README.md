## The Purpose of this Repository

This repository was developed as an open-source reference for anyone preparing for the NCEES Fundamentals of Engineering (FE) Electrical and Computer Exam in response to the lack of available open-source resources I discovered during my own preparation. While ABET accredited engineering curriculums are designed to ensure students receive instruction in all of these **fundamental** knowledge areas by which the questions on your FE Exam are derived, it is unreasonable to assume each of these topics can or will be comprehensively covered with uniform depth. Furthermore, conventional four-year undergraduate curriculums based on the defined requirements for ABET accreditation inherently results in very condensed curriculums, lectures, and student schedules. Therefore, continuous, and iterative self-learning is both expected and required to adequately develop your level of comprehension and technical competence in your chosen discipline. The professors tasked with teaching the material are forced to decide which of these areas requiring more depth than others to emphasize, while also attempting to balance their instruction between theory and application. As an engineering graduate it is assumed you have been provided the fundamental knowledge necessary to reasonably expect you possess the ability to solve relatively complex problems specific to your area of expertise with minimal guidance.

According to the NCEES website, the [pass rate](https://ncees.org/engineering/fe/) of those having taken the FE Electrical and Computer exam was a modest 66% over the prevoius 12 months. Given this statistic, and the aforementioned complexities inherent to ABET accredited undergraduate Electrical Engineering curriculums; if we assume there is a correlation between the pass rate and the retention of knowledge, then we can also assume there is a significantly higher probability of success if we can bridge the **statistically prevalent and expected** knowledge gaps of those who took and/or will take the exam through adequate preparation. There are many paid resources available for this exact purpose. However, one must consider what the cost-benefit of listening to and/or watching some random person with potentially unvalidated credentials simply narrating the end-of-chapter technical summaries specific to some topic of interest derived from unknown resources via pre-recorded or live lectures really is. Therefore, in response to this lack of available open-source reference material during my own preparation for the exam, I decided to create this repository. Through the consolidation of material specific to the knowledge areas as defined in the [FE reference manual](Docs/fe_handbook_v10.01.pdf) EE and CpE exam specifications, combined with open-source software tools and applications for visualization and/or numerical analysis, we can significantly increase conceptual comprehension and optimize the retention of these concepts. Using the material and tools provided, the user can tailor their study efforts specific to an identified knowledge gap, area of weakness, or if one so desires use the available tools and/or data to further develop comprehension and/or competence in areas of particular interest.

## Preparing for the Test

The first thing you should do is get one of the NCEES approved calculators which are listed [here](https://ncees.org/exams/calculator/). Next, to get an idea of where stand and to identify knowledge gaps, I recommend purchasing the [NCEES FE Electrical and Computer Practice Exam](https://account.ncees.org/exam-prep/432) and scheduling a date and time to complete the practice exam under conditions as similar to the actual exam as possible. Doing so will give you an idea of which knowledge areas you should focus on as a basis for your study plan. However, after taking the practice exam as a personal assessment, I advise against using it as a study reference for further preparation to prevent from developing a false sense of security by learning to solve those specific problems, rather than learning the concepts specific to how you solve those types of problems.

In preparation for the exam you can use end-of-chapter questions from your course textbooks, download material from the internet, or purchase a study guide and/or practice exams designed specifically for FE exam preparation. I used a variety of study guides and practice exams in preparation including multiple [practice exams and the study guide by Wasim Ashgar (PE)](https://www.amazon.com/s?i=stripbooks&rh=p_27%3AWasim+Asghar+PE&s=relevancerank&text=Wasim+Asghar+PE&ref=dp_byline_sr_book_1), but I found the more expensive [FE Electrical and Computer Review Manual](https://ppi2pass.com/fe-exam-products/fe-electrical-computer-exam-prep-review-manual) and the review manuals companion [FE Electrical and Computer Practice Problems](https://ppi2pass.com/fe-exam-products/fe-electrical-computer-exam-prep-practice-problems) both by Michael R. Lindeburg (PE) to be far superior to all others.

Once you have assessed your knowledge gaps by taking the practice exam under similar conditions as the actual exam, acquired an NCEES approved calculator, and have some study material you're ready to use this repo. This repo was designed to provide additional clarity with respect to complex subjects using common vernacular as opposed to the conventional math talk. The intent is not to dumb it down, but rather to translate the theoretical math vernacular into common vernacular. The combination of more explicitly defined explanations including real-world example use-cases, accompanied by executable software applications and programs for visualization and numerical analysis is designed to bridge the gap between highly-theoretical concepts and their applications in practice. This I personally believe to be the most significant cause of confusion in academia.

## Taking the Exam

The FE exam is 110-questions and 6-hours long with an optional 20-minute break after the first 55 questions. This is a unique and long test that you should mentally prepare yourself and strategize for. The questions on the test are randomly selected from a large test bank and created such that if you understand the question conceptually, then any of them can theoretically be solved within the ~2.9 minutes (110-questions/320 minutes) you are given per question. You will find that some questions are easily answered by simply reading the question, some of them you know how to answer but it will likely take you the entire ~2.9 minutes (or more) to solve, and some of them you will either not remember or have absolutely no idea how to solve. The ideology is there exists a balance between the level of difficulty specific to the questions such that the time required to solve is directly proportional to the specific questions difficulty.

There are multiple strategies for approaching this test, and regardless of what that strategy is your primary objective should be to answer all of the 110 questions. It is very easy to start chasing the rabbit down the hole (metaphorically speaking) to solve a specific problem because you are hyper-focused and conditioned to do so, and end up wasting valuable time on a question you don't initially know how to solve, rather than spending that time on easy questions and/or questions you do know how to solve. I repeat, the primary objective is to answer all 110-questions on the test! To ensure you accomplish this I recommend you take an iterative 4-step approach.

### Step 1 - The Easy Questions

During the first iteration, go through each of the first 55 questions answering the ones you can without using the laminated sheets and dry erase marker you're given, and flag the rest as you propagate through all of the questions. At the end of this iteration the majority of the questions will be flagged. Resist the temptation to solve the ones you do know how to solve and stick to the strategy!

### Step 2 - The Questions You Know How to Solve

During the second iteration, solve the ones you know how to solve removing the flags from the questions you solve. Skip the questions you don't know how to solve, but keep them flagged for the next iteration, but remain cognizant of the time. If you only "think" you know how to solve this question, resist the temptation, keep it flagged, and move to the next question saving it for the next iteration!

### Step 3 - The Time Consuming Questions

During the third iteration, solve the remaining flagged questions, but remain cognizant of the time. If you can't figure out how to solve the question, or your answer doesn't match ANY of the multiple choice answers, keep it flagged and move to the next question, but remove the flags from the questions you answer. It is imperative you remain cognizant of the time during this step. When you are within 5 minutes of your mid-point move on to the next step.

### Step 4 - Take Your Best Guess

During the fourth and final iteration of the first half of the test, loop through the flagged questions (if any) and take a guess. Remove the flags as you answer the questions continuing to iterate through the questions until ALL questions are answered. DO NOT spend more than half of your time on the first half of the questions!

Once you've completed the first half of the test, take your your 20-minute break, and when you return to the test repeat Steps 1-4 on the second half of the exam.

## Weights of the Individual Knowledge Areas

The following table lists the weighted order of precedence for each knowledge area of the FE Exam. Notice that only 6 of the 17 knowledge areas make up 51% of the entire exam. Therefore, it would behoove of you to pay particular attention to studying those topics. More specifically, allocate your study efforts proportionally with the weight of the knowledge are you are studying.

| Idx   | Knowledge Area                   | Exam Weight |
| :---: | :---------------                 | :---------: |
|  1    | Mathematics                      | 11%         |
|  2    | Circuit Analysis                 | 11%         |
|  3    | Power Systems                    | 8%          |
|  4    | Digital Systems                  | 8%          |
|  5    | Electronics                      | 7%          |
|  6    | Control Systems                  | 6%          |
|  7    | Economics                        | 5%          |
|  8    | Linear Systems                   | 5%          |
|  9    | Signal Processing                | 5%          |
|  10   | Communications                   | 5%          |
|  11   | Computer Systems                 | 5%          |
|  12   | Probability & Statistics         | 4%          |
|  13   | Ethics and Professional Practice | 4%          |
|  14   | Properties of Electric Materials | 4%          |
|  15   | Electromagnetics                 | 4%          |
|  16   | Computer Networks                | 4%          |
|  17   | Software Engingeering            | 4%          |
