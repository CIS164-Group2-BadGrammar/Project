# Group Project 1

## Git & GitHub
### Git & Repo Setup

1. Go to https://git-scm.com/ and download git if you do not already have it

2. Open bash terminal

3. In bash terminal navigate to the folder you would like to place your project in
    - type `ls` and press `enter` to display file stucture at current level
    - type `cd` and press `enter` to go into the folder one level
    - type `cd ..` and press `enter` to go back one level

4. Go go our group repo (click on the actual repo, not just the org page)

5. click on the green drop down that says `code`

6. Click on the clipboard icon next to the url to copy. Should have `https` underlined by default.  

7. Back in bash terminal, at folder location where you are storing project enter the following command
> git clone https://github.com/CIS164-Group2-BadGrammar/Project.git

8. Type `ls` and the `Project` repo should be there.  `cd` into the repo.

9. In Bash terminal, a branch name should populate called `main`

### Repo Setup

10. Since we are all going to be working on this project at the same time we should be on separate branches to avoid merge conflicts

11.  To create a branch enter the following command in bash
> git checkout -b firstName_lastName

12. If you want to switch to a different, already existing branch (like main)
> git checkout main

### Commits

13. Add is are all the files that have been changed that you want to commit. Commits are like save points in video games.  Its a way to record a project at points of significance. Push is getting your code up to the github repo

14. In terminal type the following to see changed files (should display in red)
> git status

15. In terminal type the following to add files to staging (staging for commit)
> git add .

16. In terminal type the following to see staged files (should display in green)
> git status

17. In terminal type the following to commit the changes
> git commit -m "you can type whatever you want in the quotes"

18. Type `git status` one more time if you want to check that its been committed (should say 'working tree clean')

19. In terminal type the following to push files to the repo
> git push origin firstName_lastName 

20. You can go to github and click on the branch dropdown (above repo to the right), click on your branch, and your changes should be there now

21. here is a geeks article, but it has a lot of commands that we arent going to use: https://www.geeksforgeeks.org/working-on-git-bash/