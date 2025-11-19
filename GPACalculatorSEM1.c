#include<stdio.h>
#include<string.h>
int main(){
      float gpa,cal,phy,ctps,eob,egd,eep,ee,iks,es,icac,icap,icact,icaeo,icaeg,icaeep,icaee,icaes,icaiks,calfinalscore,ctpsfinalscore,phyfinalscore,eobfinalscore,egdfinalscore,eepfinalscore,eefinalscore;

      int ptscal=0,ptsphy=0,ptsctps=0,ptseob=0,ptsegd=0,ptseep=0,ptsee=0,sap;
      int totalpts;

      char name[100];
      char roll[10];

      //ENTERING DETAILS
      printf("Enter your Name : \n ");
      scanf(" %[^\n]", name);


      printf("\nEnter your Sap id : \n");
      scanf("%d",&sap);
      printf("\nEnter your roll number : \n");
      scanf("%s",roll);


      //ENTERING ICA AND TEE MARKS
      printf("\nEnter your Term End Marks and ICA marks of each sunject RESPECTIVELY : ");
      printf("\nCalculuus TEE and ICA-");//CALCULUS
      scanf("%f %f",&cal,&icac);
      printf("\nPhysics TEE and ICA-");//PHYSICS
      scanf("%f %f",&phy,&icap);
      printf("\nCTPS TEE and ICA-");//CTPS
      scanf("%f %f",&ctps,&icact);
      printf("\nEOB(Elements of Biology) TEE and ICA-");//EOB
      scanf("%f %f",&eob,&icaeo);
      printf("\nEGD(Engineering Graphics Drawing) TEE and ICA-");//EGD
      scanf("%f %f",&egd,&icaeg);
      printf("\nEEP(Essentials of Electronic Practices) ICA-");//EEP
      scanf("%f",&icaeep);
      printf("\nEE-(Engineering Ethics) ICA-");//EE
      scanf("%f",&icaee);
      printf("\nIKS(Indian Knowledge System) ICA-");//IKS
      scanf("%f",&icaiks);
      printf("\nES(Environmental Science)ICA-");//ES
      scanf("%f",&icaes);


      //CALCULATING THE FINAL SCORE
      //1.CALCULUS
      calfinalscore=(cal/2.0)+icac;
      printf("\nFinal score for calculus is %.2f\n",calfinalscore);
      //2.PHYSICS
      phyfinalscore=(phy/2.0)+icap;
      printf("Final score for physics is %.2f\n",phyfinalscore);
      //3.CTPS
      ctpsfinalscore=(ctps/2.0)+icact;
      printf("Final score for CTPS is %.2f\n",ctpsfinalscore);
      //4.EOB
      eobfinalscore=(eob/2.0)+icaeo;
      printf("Final score for eob is %.2f\n",eobfinalscore);
      //5.EGD
      egdfinalscore=egd+icaeg;
      printf("Final score for EGD is %.2f\n",egdfinalscore);
      //6.EEP
      eepfinalscore=icaeep*2;
      printf("Final score for EEP is %.2f\n",eepfinalscore);
      //7.EE
      eefinalscore=icaee*2;
      printf("Final score for EE is %.2f\n",eefinalscore);

      //Grade and points
      //1.Calculus     
      // 1. CALCULUS
if (calfinalscore >= 90 && calfinalscore <= 100) {
    printf("\nGrade 'O' and 10 points in Calculus : %.2f", calfinalscore);
    printf(" Performance = Outstanding");
    ptscal=40;
}
else if (calfinalscore >= 80 && calfinalscore < 90) {
    printf("\nGrade 'A+' and 9 points in Calculus : %.2f", calfinalscore);
    printf(" Performance = Excellent");
    ptscal=36;
}
else if (calfinalscore >= 70 && calfinalscore < 80) {
    printf("\nGrade 'A' and 8 points in Calculus : %.2f", calfinalscore);
    printf(" Performance = Very Good");
    ptscal=32;
}
else if (calfinalscore >= 60 && calfinalscore < 70) {
    printf("\nGrade 'B+' and 7 points in Calculus : %.2f", calfinalscore);
    printf(" Performance = Good");
    ptscal=28;
}
else if (calfinalscore >= 55 && calfinalscore < 60) {
    printf("\nGrade 'B' and 6 points in Calculus : %.2f", calfinalscore);
    printf(" Performance = Above Average");
    ptscal=24;
}
else if (calfinalscore >= 50 && calfinalscore < 55) {
    printf("\nGrade 'C' and 5 points in Calculus : %.2f", calfinalscore);
    printf(" Performance = Average");
    ptscal=20;
}
else if (calfinalscore >= 40 && calfinalscore < 50) {
    printf("\nGrade 'P' and 4 points in Calculus : %.2f", calfinalscore);
    printf(" Performance = Pass");
    ptscal=16;
}
else if (calfinalscore > 0 && calfinalscore < 40) {
    printf("\nGrade 'F' and 0 points in Calculus : %.2f", calfinalscore);
    printf(" Performance = Fail");
    ptscal=0;
}
else if (calfinalscore == 0) {
    printf("\nGrade 'AB' - The candidate was absent : %.2f", calfinalscore);
    printf(" Performance = Absent\n");
    ptscal=0;
}


     //2.PHYSICS
     // 2. PHYSICS
if (phyfinalscore >= 90 && phyfinalscore <= 100) {
    printf("\nGrade 'O' and 10 points in Physics : %.2f", phyfinalscore);
    printf(" Performance = Outstanding");
    ptsphy=40;
}
else if (phyfinalscore >= 80 && phyfinalscore < 90) {
    printf("\nGrade 'A+' and 9 points in Physics : %.2f", phyfinalscore);
    printf(" Performance = Excellent");
    ptsphy=36;
}
else if (phyfinalscore >= 70 && phyfinalscore < 80) {
    printf("\nGrade 'A' and 8 points in Physics : %.2f", phyfinalscore);
    printf(" Performance = Very Good");
    ptsphy=32;
}
else if (phyfinalscore >= 60 && phyfinalscore < 70) {
    printf("\nGrade 'B+' and 7 points in Physics : %.2f", phyfinalscore);
    printf(" Performance = Good");
    ptsphy=28;
}
else if (phyfinalscore >= 55 && phyfinalscore < 60) {
    printf("\nGrade 'B' and 6 points in Physics : %.2f", phyfinalscore);
    printf(" Performance = Above Average");
    ptsphy=24;
}
else if (phyfinalscore >= 50 && phyfinalscore < 55) {
    printf("\nGrade 'C' and 5 points in Physics : %.2f", phyfinalscore);
    printf(" Performance = Average");
    ptsphy=20;
}
else if (phyfinalscore >= 40 && phyfinalscore < 50) {
    printf("\nGrade 'P' and 4 points in Physics : %.2f", phyfinalscore);
    printf(" Performance = Pass");
    ptsphy=16;
}
else if (phyfinalscore > 0 && phyfinalscore < 40) {
    printf("\nGrade 'F' and 0 points in Physics : %.2f", phyfinalscore);
    printf(" Performance = Fail");
    ptsphy=0;
}
else if (phyfinalscore == 0) {
    printf("\nGrade 'AB' - The candidate was absent : %.2f", phyfinalscore);
    printf(" Performance = Absent\n");
    ptsphy=0;
}


      //3.CTPS
      // 3. CTPS
if (ctpsfinalscore >= 90 && ctpsfinalscore <= 100) {
    printf("\nGrade 'O' and 10 points in CTPS : %.2f", ctpsfinalscore);
    printf(" Performance = Outstanding");
    ptsctps=40;
}
else if (ctpsfinalscore >= 80 && ctpsfinalscore < 90) {
    printf("\nGrade 'A+' and 9 points in CTPS : %.2f", ctpsfinalscore);
    printf(" Performance = Excellent");
    ptsctps=36;
}
else if (ctpsfinalscore >= 70 && ctpsfinalscore < 80) {
    printf("\nGrade 'A' and 8 points in CTPS : %.2f", ctpsfinalscore);
    printf(" Performance = Very Good");
    ptsctps=32;
}
else if (ctpsfinalscore >= 60 && ctpsfinalscore < 70) {
    printf("\nGrade 'B+' and 7 points in CTPS : %.2f", ctpsfinalscore);
    printf(" Performance = Good");
    ptsctps=28;
}
else if (ctpsfinalscore >= 55 && ctpsfinalscore < 60) {
    printf("\nGrade 'B' and 6 points in CTPS : %.2f", ctpsfinalscore);
    printf(" Performance = Above Average");
    ptsctps=24;
}
else if (ctpsfinalscore >= 50 && ctpsfinalscore < 55) {
    printf("\nGrade 'C' and 5 points in CTPS : %.2f", ctpsfinalscore);
    printf(" Performance = Average");
    ptsctps=20;
}
else if (ctpsfinalscore >= 40 && ctpsfinalscore < 50) {
    printf("\nGrade 'P' and 4 points in CTPS : %.2f", ctpsfinalscore);
    printf(" Performance = Pass");
    ptsctps=16;
}
else if (ctpsfinalscore > 0 && ctpsfinalscore < 40) {
    printf("\nGrade 'F' and 0 points in CTPS : %.2f", ctpsfinalscore);
    printf(" Performance = Fail");
    ptsctps=0;
}
else if (ctpsfinalscore == 0) {
    printf("\nGrade 'AB' - The candidate was absent : %.2f", ctpsfinalscore);
    printf(" Performance = Absent\n");
    ptsctps=0;
}


      //4.EOB(ELEMENTS OF BIOLOGY)
     // 4. EOB
if (eobfinalscore >= 90 && eobfinalscore <= 100) {
    printf("\nGrade 'O' and 10 points in EOB : %.2f", eobfinalscore);
    printf(" Performance = Outstanding");
    ptseob=30;
}
else if (eobfinalscore >= 80 && eobfinalscore < 90) {
    printf("\nGrade 'A+' and 9 points in EOB : %.2f", eobfinalscore);
    printf(" Performance = Excellent");
    ptseob=27;
}
else if (eobfinalscore >= 70 && eobfinalscore < 80) {
    printf("\nGrade 'A' and 8 points in EOB : %.2f", eobfinalscore);
    printf(" Performance = Very Good");
    ptseob=24;
}
else if (eobfinalscore >= 60 && eobfinalscore < 70) {
    printf("\nGrade 'B+' and 7 points in EOB : %.2f", eobfinalscore);
    printf(" Performance = Good");
    ptseob=21;
}
else if (eobfinalscore >= 55 && eobfinalscore < 60) {
    printf("\nGrade 'B' and 6 points in EOB : %.2f", eobfinalscore);
    printf(" Performance = Above Average");
    ptseob=18;
}
else if (eobfinalscore >= 50 && eobfinalscore < 55) {
    printf("\nGrade 'C' and 5 points in EOB : %.2f", eobfinalscore);
    printf(" Performance = Average");
    ptseob=15;
}
else if (eobfinalscore >= 40 && eobfinalscore < 50) {
    printf("\nGrade 'P' and 4 points in EOB : %.2f", eobfinalscore);
    printf(" Performance = Pass");
    ptseob=12;
}
else if (eobfinalscore > 0 && eobfinalscore < 40) {
    printf("\nGrade 'F' and 0 points in EOB : %.2f", eobfinalscore);
    printf(" Performance = Fail");
    ptseob=0;
}
else if (eobfinalscore == 0) {
    printf("\nGrade 'AB' - The candidate was absent : %.2f", eobfinalscore);
    printf(" Performance = Absent\n");
    ptseob=0;
}


      //5.EGD(ENGINEERING GRAPHICS DRAWING)
      // 5. EGD
if (egdfinalscore >= 90 && egdfinalscore <= 100) {
    printf("\nGrade 'O' and 10 points in EGD : %.2f", egdfinalscore);
    printf(" Performance = Outstanding");
    ptsegd=20;
}
else if (egdfinalscore >= 80 && egdfinalscore < 90) {
    printf("\nGrade 'A+' and 9 points in EGD : %.2f", egdfinalscore);
    printf(" Performance = Excellent");
    ptsegd=18;
}
else if (egdfinalscore >= 70 && egdfinalscore < 80) {
    printf("\nGrade 'A' and 8 points in EGD : %.2f", egdfinalscore);
    printf(" Performance = Very Good");
    ptsegd=16;
}
else if (egdfinalscore >= 60 && egdfinalscore < 70) {
    printf("\nGrade 'B+' and 7 points in EGD : %.2f", egdfinalscore);
    printf(" Performance = Good");
    ptsegd=14;
}
else if (egdfinalscore >= 55 && egdfinalscore < 60) {
    printf("\nGrade 'B' and 6 points in EGD : %.2f", egdfinalscore);
    printf(" Performance = Above Average");
    ptsegd=12;
}
else if (egdfinalscore >= 50 && egdfinalscore < 55) {
    printf("\nGrade 'C' and 5 points in EGD : %.2f", egdfinalscore);
    printf(" Performance = Average");
    ptsegd=10;
}
else if (egdfinalscore >= 40 && egdfinalscore < 50) {
    printf("\nGrade 'P' and 4 points in EGD : %.2f", egdfinalscore);
    printf(" Performance = Pass");
    ptsegd=8;
}
else if (egdfinalscore > 0 && egdfinalscore < 40) {
    printf("\nGrade 'F' and 0 points in EGD : %.2f", egdfinalscore);
    printf(" Performance = Fail");
    ptsegd=0;
}
else if (egdfinalscore == 0) {
    printf("\nGrade 'AB' - The candidate was absent : %.2f", egdfinalscore);
    printf(" Performance = Absent\n");
    ptsegd=0;
}

      //6.EEP
      // 6. EEP
if (eepfinalscore >= 90 && eepfinalscore <= 100) {
    printf("\nGrade 'O' and 10 points in EEP : %.2f", eepfinalscore);
    printf(" Performance = Outstanding");
    ptseep=10;
}
else if (eepfinalscore >= 80 && eepfinalscore < 90) {
    printf("\nGrade 'A+' and 9 points in EEP : %.2f", eepfinalscore);
    printf(" Performance = Excellent");
    ptseep=9;
}
else if (eepfinalscore >= 70 && eepfinalscore < 80) {
    printf("\nGrade 'A' and 8 points in EEP : %.2f", eepfinalscore);
    printf(" Performance = Very Good");
    ptseep=8;
}
else if (eepfinalscore >= 60 && eepfinalscore < 70) {
    printf("\nGrade 'B+' and 7 points in EEP : %.2f", eepfinalscore);
    printf(" Performance = Good");
    ptseep=7;
}
else if (eepfinalscore >= 55 && eepfinalscore < 60) {
    printf("\nGrade 'B' and 6 points in EEP : %.2f", eepfinalscore);
    printf(" Performance = Above Average");
    ptseep=6;
}
else if (eepfinalscore >= 50 && eepfinalscore < 55) {
    printf("\nGrade 'C' and 5 points in EEP : %.2f", eepfinalscore);
    printf(" Performance = Average");
    ptseep=5;
}
else if (eepfinalscore >= 40 && eepfinalscore < 50) {
    printf("\nGrade 'P' and 4 points in EEP : %.2f", eepfinalscore);
    printf(" Performance = Pass");
    ptseep=4;
}
else if (eepfinalscore > 0 && eepfinalscore < 40) {
    printf("\nGrade 'F' and 0 points in EEP : %.2f", eepfinalscore);
    printf(" Performance = Fail");
    ptseep=0;
}
else if (eepfinalscore == 0) {
    printf("\nGrade 'AB' - The candidate was absent : %.2f", eepfinalscore);
    printf(" Performance = Absent\n");
    ptseep=0;
}

      //7.EE
       // 7. EE
if (eefinalscore >= 90 && eefinalscore <= 100) {
    printf("\nGrade 'O' and 10 points in EE : %.2f", eefinalscore);
    printf(" Performance = Outstanding");
    ptsee=10;
}
else if (eefinalscore >= 80 && eefinalscore < 90) {
    printf("\nGrade 'A+' and 9 points in EE : %.2f", eefinalscore);
    printf(" Performance = Excellent");
    ptsee=9;
}
else if (eefinalscore >= 70 && eefinalscore < 80) {
    printf("\nGrade 'A' and 8 points in EE : %.2f", eefinalscore);
    printf(" Performance = Very Good");
    ptsee=8;
}
else if (eefinalscore >= 60 && eefinalscore < 70) {
    printf("\nGrade 'B+' and 7 points in EE : %.2f", eefinalscore);
    printf(" Performance = Good");
    ptsee=7;
}
else if (eefinalscore >= 55 && eefinalscore < 60) {
    printf("\nGrade 'B' and 6 points in EE : %.2f", eefinalscore);
    printf(" Performance = Above Average");
    ptsee=6;
}
else if (eefinalscore >= 50 && eefinalscore < 55) {
    printf("\nGrade 'C' and 5 points in EE : %.2f", eefinalscore);
    printf(" Performance = Average");
    ptsee=5;
}
else if (eefinalscore >= 40 && eefinalscore < 50) {
    printf("\nGrade 'P' and 4 points in EE : %.2f", eefinalscore);
    printf(" Performance = Pass");
    ptsee=4;
}
else if (eefinalscore > 0 && eefinalscore < 40) {
    printf("\nGrade 'F' and 0 points in EE : %.2f", eefinalscore);
    printf(" Performance = Fail");
    ptsee=0;
}
else if (eefinalscore == 0) {
    printf("\nGrade 'AB' - The candidate was absent : %.2f", eefinalscore);
    printf(" Performance = Absent\n");
    ptsee=0;
}

//NOW FINAL CALCULATION OF GPA
totalpts=ptscal+ptsctps+ptsphy+ptsegd+ptseob+ptseep+ptsee;
gpa=(float)totalpts/19.0;

printf("\nHence Your Total GPA is %.2f\n :",gpa);

return 0;
}












    
  



      

      





















































































      


     
