#include <stdio.h>
#define Match
#define NotMatch

char reg[10], text[10];

int main()
{
int i, rlen, tlen, f = 0;
char run;
{
       printf("Regular Expression\n");
       scanf(" %[^\n]s", reg);
        for (rlen = 0; reg[rlen] != '\0';rlen++);
       printf("Enter the text\n");
       scanf(" %[^\n]s", text);
        for (tlen = 0;text[tlen] != '\0' ; tlen++);
    if (reg[0] == '*')
            {
                printf("Invalid regular expression");
            }

            if ((reg[0] >= 65 && reg[0] <= 90) || (reg[0] >= 97 && reg[0] <=122))
            {
                if (reg[0] == text [0])
                {
                    switch (reg[1])
                    {
                    case '.' :
                        switch (reg[2])
                        {
                        case '*':
                            if (tlen != 1)
                            {
                                if (reg[3] == text[tlen-1])
                                {
                                    Match;
                                }
                                else
                                {
                                   NotMatch;
                                }
                            }
                            else
                            {
                                NotMatch;
                            }
                            break;
                        case '+':
                            if (text[1] != reg[3])
                            {
                                if (reg[3] == text[tlen - 1])
                                {
                                    Match;
                                }
                                else
                                {
                                    NotMatch;
                                }
                            }
                            break;
                        case '?':
                            if (text[1] == reg[3] || text[2] == reg[3])
                            {
                                if (text[1] == reg[3] || text[2] == reg[3])
                                {
                                    Match;
                                }
                                else
                                {
                                    NotMatch;
                                }
                            }
                            else
                            {
                                NotMatch;
                            }
                             break;
                            }
                            break;
                        case '*':
                            if (reg[rlen-1] == text[tlen-1])
                            {
                                for (i = 0;i <= tlen-2;i++)
                                {
                                    if(text[i] == reg[0])
                                    {
                                        f = 1;
                                    }
                                    else
                                    {
                                        f = 0;
                                    }
                                }
                                if ( f == 1)
                                {
                                    Match;
                                }
                                else
                                {
                                   NotMatch;
                                }
                            }
                            else
                            {
                                NotMatch;
                            }
                            break;
                    case '+' :
                        if (tlen <= 2)
                        {
                            NotMatch;
                        }
                        else if (reg[rlen-1] == text[tlen-1])
                        {
                            for (i = 0;i < tlen-2;i++)
                            {
                                if (text[i] == reg[0])
                                {
                                    f = 1;
                                }
                                else
                                {
                                    f = 0;
                                }
                            }

                            if (f == 1)
                            {
                                Match;
                            }
                            else
                            {
                                NotMatch;
                            }
                        }
                            break;
                    case '?':
                        if (reg[rlen -1] == text[tlen-1])
                        {
                            Match;
                        }
                        else
                        {
                            NotMatch;
                        }
                    break;
                }

            }
            else
                printf("Does not match");
        }

        else if (reg[0] == '^')
        {
            if (reg[1] == text[0])
            {
                Match;
            }
            else
            {
                NotMatch;
            }
        }

        else if (reg[rlen-1] == '$')
        {
            if (reg[rlen-2] == text[rlen-1])
            {
                Match;
            }
            else
            {
                NotMatch;
            }
        }

        else
            printf("Not Implemented");
    } while (run == 'Y' || run == 'y');
}
