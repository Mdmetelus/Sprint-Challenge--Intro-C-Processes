#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line
  char *dir_name;

  DIR *od;

  struct dirent *enter;

  struct stat fileStat;

  // test prints opening
  printf("\ntest prints opening!\n\n");

  if (argc <= 1) // check if there is no input
  {

    dir_name = "."; // print current directory
  }

  else if (argc == 2) // if directory in input (argv[1]), make a ref to that directory
  {
    dir_name = argv[1];
  }

  else 
  {
    // catch any wrong directories and errors
    printf("Cannot open dir '%s'!!", argv[1]);
  }



  // Open directory

  od = opendir(dir_name);

  // Repeatly read and print entries

  while ((enter = readdir(od)) != NULL)
  {
    stat(enter->d_name, &fileStat);

    if (fileStat.st_mode & S_IFDIR)
    {
      printf("%s\n", enter->d_name);
    }
    else
    {
      printf("size: %ldkb\t file: %s\n", fileStat.st_size, enter->d_name);
    }
  }

  // Close directory

  closedir(od);

  // test prints closing
  printf("\ntest prints closing!\n");

      return 0;
}