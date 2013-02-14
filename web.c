#include<stdio.h>
  main()
  {
  char title[50],fname[20],logo[20]; //variable declaration
  int choice;
  char h[50];
  char link[50],q[50],c[100],name[20];
  int head,parts,i;
  FILE *f;                            // file 
  
  
  
  f=fopen("web.html","w");       //file open
  fprintf(f,"<html><head><title>");
  
  printf("Enter the title of the website:"); //Title of website
  scanf("%s",title);
  fprintf(f,"%s</title>",title);
  
  
  printf("\n Custom CSS file \n Press 1 to enter custom css file\nPress 0 to use default css file\n"); // css f    ile
printf("enter your choice:");
scanf("%d",&choice);
  
  if(choice == 1)
  {
  printf("\nEnter the file name");
          scanf("%s",fname);
          fprintf(f,"<link rel=\"stylesheet\" type=\"text/css\" href=\"%s.css\"></head>",fname);
}
  if(choice == 0)
{ 
fprintf(f,"<link rel=\"stylesheet\" type=\"text/css\" href=\"index1.css\"></head>");
  }
  fprintf(f,"<body>");     //body starts

  printf("\nEnter the heading of the site:");
  scanf("%s",name);
  
  fprintf(f,"<h1>%s</h1>",name);
  
  printf("\nEnter the logo image with extension");         // logo of the site
  scanf("%s",logo);
  
  fprintf(f,"<div id=logo><img src=\"%s\">",logo);         //div id=logo 
  
  fprintf(f,"</div>");
  
  printf("How many headings/navigation keys u want to enter:");   //Headings 
  scanf("%d",&head);
  
  fprintf(f,"<div id=\"nav\"> <ul>");
  
  for (i=0;i<head;i++)
  {
  printf("\nEnter the %d heading:",i+1);
  scanf("%s",h);
  printf("Enter the link in heading %d:",i+1);
  scanf("%s",link);
  fprintf(f,"<li><a herf=\"%s\">%s</a></li>",link,h);
}
  
  fprintf(f,"</ul></div>");
  
  fprintf(f,"<div id=\"content\">");                             // div id =content
  
  printf("\nHow many posts content u want to add:");
  scanf("%d",&parts);
  for(i=0;i<parts;i++)
  {
  printf("\n Enter heading:");
  scanf("%s",q);
  printf("\n Enter content:");
  scanf("%s",c);
  fprintf(f,"<h4>%s</h4><br>",q);
  
  fprintf(f,"%s",c);
  }
  printf("thanks :) :) now open browser:");
  
  fprintf(f,"</div></body></html");
  
  fclose(f);
  }
