string ari(string st)
{
     char *s=st;int wrd_ct=0;int snt_count=0;int ch=0;
     for(int i=0;*(s+i)!='\0';++i)
     {   if(*(st+i)=='')
              wrd_ct++;
           if (*(st+i)=='')
              snt_count++;
     }
 
                int ari=(4.71*ch/wrd_ct)+(.5*wrd_ct/snt_count)-21.43; 
        
                string class[]={"Kindergarten","First/Second Grade","Third Grade","Fourth Grade","Fifth Grade","Sixth Grade","Seventh Grade","Eighth Grade","Ninth Grade","Tenth Grade","Eleventh Grade","Twelfth grade","College student","Professor"};
                if(ari==(int)ari)
            return(class[ari-1]);
        else
            return(class[ari]);
                
}        
