# Creates a new chapter directory structure.

import sys
import os
import shutil

if __name__ == '__main__':
    chapter_num = sys.argv[1]
    if len(chapter_num) == 1:
        chapter_num = "0" + chapter_num

    os.mkdir(chapter_num)
    os.chdir(chapter_num)
    os.mkdir('examples')
    os.mkdir('examples/bin')
    os.mkdir('exercises')
    os.mkdir('exercises/bin')
    os.mkdir('notes')
    os.mkdir('projects')
    os.mkdir('projects/bin')
    shutil.copyfile('../project_template.c', 'projects/template.c')
