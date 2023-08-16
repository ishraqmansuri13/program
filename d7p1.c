#include <stdio.h>

int main()
{
    int a, b;

    printf("enter your parcentage of class 10\n");
    scanf("%d", &a);
    if (a > 75)
    {
        printf("congratulation you are capable for science PCM & PCB\n");

        printf("now you are intrasted in science you can follow it and you not intrasted in science you type your parcetage less than 75\n");
        printf("you are hear means you intrasted in science now time to selact a subject in PCM and PCB\n");
        printf("you are intrested in pcm then type = 1 and you are intrasted in pcb then type = 2 \n");
        scanf("%c", &b);

        if (b == 1)
        {
            printf("now we give you detail about PCM\n"
                   "What Is 12th PCM? Students who have done their senior secondary (10+2) certification with science (Physics, Chemistry and Mathematics) as their main subjects are said to be in 12th PCM stream."
                   "Btech Civil Engineerin\n"
                   "Btech Mechanical Engineerin\n"
                   "Btech Chemical Engineerin\n"
                   "BTech Electronics & Communication Engineerin\n"
                   "BTech Information Technolog\n"
                   "BTech Genetic Engineerin\n"
                   "BTech Automobile Engineerin\n"
                   "BTech Aeronautical Engineerin\n"
                   "BTech Civil and Structural Engineerin\n"
                   "BTechIndustrial Engineerin\n"
                   "BTech Instrumentation & Control Engineerin\n"
                   "BTech Mining Engineerin\n"
                   "BTech Electronics\n"
                   "Btech Biotechnolog\n"
                   "Btech Food Technolog\n"
                   "BSc Physic\n"
                   "BSc Chemistr\n"
                   "BSc Mathematic\n"
                   "BSc in Economic\n"
                   "BSc Aviatio\n"
                   "BSc Home Scienc\n"
                   "BSc in Robotic\n"
                   "BSC in Applied Mathematic\n"
                   "BSc in Statistic\n"
                   "BSc In Nautical Science\n"
                   "BSc in Data Science/ Data Analytic\n"
                   "BSc in Actuarial Science\n"
                   "BSc in Financ\n"
                   "Bachelor of Computer Application and Computer Scienc\n"
                   "Bachelor of Business Administration (BBA\n"
                   "BBA Sale\n"
                   "BBA Marketin\n"
                   "BBA Entrepreneurshi\n"
                   "BMS BBA Accounting\n"
                   "B.Co\n"
                   "BA in Hotel Managemen\n"
                   "BA in Retail Managemen\n"
                   "BA in Fashion Merchandising and Marketin\n"
                   "BA in Travel and Tourism Managemen\n"
                   "Bachelor of Business Economic\n"
                   "Bachelor of International Business and Financ\n"
                   "Bachelor of Fashion Technolog\n"
                   "Management Studie\n"
                   "Banking and Insurance\n"
                   "Chartered Accountancy (CA\n"
                   "Company Secretary (CS\n"
                   "BSc Environmental Studie\n"
                   "Bachelor of Architecture\n"
                   "BDes Product Desig\n"
                   "BDes Industrial Design Vehicle Desig\n"
                   "B.Plannin\n"
                   "Commercial Pilot Licens\n"
                   "Nautical Science/ Merchant Navy Training\n"

            );
        }
        else
        {
            printf("now we give you detail about PCB\nCourses after 12th PCB: Class 12th is one of the most essential paths of one's life. It initiates the aspirant’s career and shapes the future ahead. There is an abundance of courses after 12th PCB. From being a doctor to becoming a lecturer or a pharmacist, students are free to choose many good courses which in turn will help them grow and earn well.\n"
                   "MBBS(Bachelor of Medicine and Bachelor of Surgery)\n"

            );
        }
    }
    else
    {
        printf("congratulation you are capable for Commerce\n");
    }

    return 0;
}
