void find_and_replace (char* main_str,char* find_str,char* replace_str,char* p_str)
{
    int i,j,k;
    int counter_find=0;
    int counter_main=0;
    int flag=1;
    int marker=1;
    int v=0;
    int flag_1=1;
    int next_word;//indx of next word .
    int first_place;// indx of the word i'm looking for.
    int f=0,w,u,a;

    int main_str_leng=str_counter(main_str);

    for(i=0; main_str[i] && marker; i++)
    {

        if(i==0  || main_str[i]==' ')//main loop (i)
        {
            if(main_str[i]==' ')
            {
                i++;
            }

            for(j=i; flag; j++) //one word loop (j)
            {
                for(k=0; find_str[k] && flag_1 ; k++)//compair loop (k)
                {
                    if(find_str[k]==main_str[j+k])
                    {
                        counter_find++;
                    }

                }
                flag_1=0;
                counter_main++;
                if(main_str[j+1]==' ' || main_str[j+1]==0 ) //to stop the (one word) loop
                {
                    flag=0;
                }

            }
            if(counter_find==counter_main)
            {
                marker=0;
                first_place=j-counter_find;
                next_word =j+1;
            }
            else
            {
                counter_find=0;
                counter_main=0;
                flag_1=1;
            }
            flag=1;
        }

    }
    /*************/
    if (marker==0)// the word is found.
    {

        for(u=0; u<first_place; u++) //write the words before the replaced-word.
        {
            p_str[u]=main_str[u];
        }

        for(w=first_place; replace_str[f]; w++) //write the replaced word.
        {
            p_str[w]=replace_str[f];
            f++;
        }

        if(next_word < main_str_leng)  //check if the replaced-word is the last one.
        {
            p_str[w]=' ';
            w++;
            for(u=next_word; main_str[u]; u++)
            {
                p_str[w]=main_str[u];
                w++;
            }
        }
        p_str[w]=0;
    }
    else   //word not found.
    {

        for(a=0; main_str[a]; a++)
        {
            p_str[a]=main_str[a];
        }

    }

}
