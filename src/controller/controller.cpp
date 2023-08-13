/*
 * File: controller.cpp
 * Author: Linh Pham
 * Date: 11/08/2023
 * Description: This is a controller.cpp contain implement method for class Controller
 */
#include "../../header/controller/controller.h"

/*
 * Function: run
 * Description: Main function use manage play music
 * Input:
 *   None
 * Output:
 *   None
 */
void Controller::run()
{

  int key = 0;

  do
  {

    viewPtr->showOptionsMainMenu();
    viewPtr->cinOption(key);

    switch (key)
    {
    case SHOW_MUSIC:
      showMusicInFolder();
      break;
    case CREATE_PLAYLIST:
      createPlaylist();
      break;
    case ERASE_PLAYLIST:
      erasePlaylist();
      break;
    case SHOW_PLAYLIST:
      showPlaylist();
      break;
    case UPDATE_PLAYLIST:
      updatePlaylist();
      break;
    case SHOW_MEDIAFILE:
      showMediaFile();
      break;
    case PLAY:
      optionMusic();
      break;
    case EXIT_MENU:
      exit(0);
      break;
    }

  } while (1);
}

/*
 * Function: createPlaylist
 * Description: create new playlist
 * Input:
 *   None
 * Output:
 *   None
 */
void Controller::createPlaylist()
{

  string name = "";

  cout << "- Input name new playlist: " << endl;
  viewPtr->cinString(name);

  Playlist newPlaylist(name);
  listPtr->addPlaylist(newPlaylist);

  cout << "Create new playlist is success!" << endl;
}

/*
 * Function: erasePlaylist
 * Description: erase playlist by index
 * Input:
 *   None
 * Output:
 *   None
 */
void Controller::erasePlaylist()
{

  int indexPlaylist = 0;

  viewPtr->showList();     // view list
  listPtr->getInforList(); // model get data list

  viewPtr->cinIndex(indexPlaylist);

  listPtr->erasePlaylist(indexPlaylist);
}

/*
 * Function: showPlaylist
 * Description: show infor of playlist by index
 * Input:
 *   None
 * Output:
 *   None
 */
void Controller::showPlaylist()
{

  int indexPlaylist = 0;

  viewPtr->showList();
  listPtr->getInforList();

  viewPtr->cinIndex(indexPlaylist);

  viewPtr->showPlaylist();
  listPtr->getInforPlaylist(indexPlaylist);
}

/*
 * Function: updatePlaylist
 * Description: update playlist include: insert, erase, update infor for media file
 * Input:
 *   None
 * Output:
 *   None
 */
void Controller::updatePlaylist()
{

  int key = 0;

  viewPtr->showOptionsUpdatePlaylist();

  viewPtr->cinOption(key);

  switch (key)
  {
  case INSERT_MEDIAFILE:
    insertMediaFile();
    break;
  case ERASE_MEDIAFILE:
    eraseMediaFile();
    break;
  case UPDATE_MEDIAFILE:
    viewPtr->showOptionsUpdateMediaFile();
    viewPtr->cinOption(key);

    switch (key)
    {
    case TITLE:
      changeTitleMediaFile();
      break;
    case ARTIST:
      changeArtistMediaFile();
      break;
    case YEAR:
      changeYearMediaFile();
      break;
    case EXIT_UPDATEMEDIA:
      break;
    }

    break;
  case EXIT_UPDATEPLAYLIST:
    break;
  }
}

/*
 * Function: insertMediaFile
 * Description: insert media file to playlist
 * Input:
 *   None
 * Output:
 *   None
 */
void Controller::insertMediaFile()
{

  int indexPlaylist = 0;
  string path = "";

  viewPtr->showList();
  listPtr->getInforList();

  viewPtr->cinIndex(indexPlaylist);

  cout << "- Input path for new media file: " << endl;
  viewPtr->cinString(path);

  MediaFile newMediaFile(path);
  listPtr->addMediaFile(indexPlaylist, newMediaFile);
}

/*
 * Function: eraseMediaFile
 * Description: erase media file in playlist by index
 * Input:
 *   None
 * Output:
 *   None
 */
void Controller::eraseMediaFile()
{

  int indexPlaylist = 0;
  int indexMediaFile = 0;

  viewPtr->showList();
  listPtr->getInforList();

  viewPtr->cinIndex(indexPlaylist, indexMediaFile);

  listPtr->eraseMediaFile(indexPlaylist, indexMediaFile);
}

/*
 * Function: changeTitleMediaFile
 * Description: change title media file
 * Input:
 *   None
 * Output:
 *   None
 */
void Controller::changeTitleMediaFile()
{

  int indexPlaylist = 0;
  int indexMediaFile = 0;
  string title = "";

  viewPtr->showList();
  listPtr->getInforList();

  viewPtr->cinIndex(indexPlaylist, indexMediaFile);

  cout << "- Input new Title: " << endl;
  viewPtr->cinString(title);

  listPtr->changeTitleMediaFile(indexPlaylist, indexMediaFile, title);
}

/*
 * Function: changeArtistMediaFile
 * Description: change artist media file
 * Input:
 *   None
 * Output:
 *   None
 */
void Controller::changeArtistMediaFile()
{

  int indexPlaylist = 0;
  int indexMediaFile = 0;
  string artist = "";

  viewPtr->showList();
  listPtr->getInforList();

  viewPtr->cinIndex(indexPlaylist, indexMediaFile);

  cout << "- Input new artist: " << endl;
  viewPtr->cinString(artist);

  listPtr->changeArtistMediaFile(indexPlaylist, indexMediaFile, artist);
}

/*
 * Function: changeYearMediaFile
 * Description: change year media file
 * Input:
 *   None
 * Output:
 *   None
 */
void Controller::changeYearMediaFile()
{

  int indexPlaylist = 0;
  int indexMediaFile = 0;
  int year = 0;

  viewPtr->showList();
  listPtr->getInforList();

  viewPtr->cinIndex(indexPlaylist, indexMediaFile);

  cout << "- Input new year: " << endl;
  cin >> year;

  listPtr->changeYearMediaFile(indexPlaylist, indexMediaFile, year);
}

/*
 * Function: showMediaFile
 * Description: show infor a media file by index playlist & index media file in playlist
 * Input:
 *   None
 * Output:
 *   None
 */
void Controller::showMediaFile()
{
  int indexPlaylist = 0;
  int indexMediaFile = 0;

  viewPtr->showList();     // view list
  listPtr->getInforList(); // model get data list

  viewPtr->cinIndex(indexPlaylist, indexMediaFile);

  viewPtr->showMediaFile();
  listPtr->getInforMediaFile(indexPlaylist, indexMediaFile);
}

/*
 * Function: showMusicInFolder
 * Description: show all music in that folder & subfolder
 * Input:
 *   None
 * Output:
 *   None
 */
void Controller::showMusicInFolder()
{

  string line = ""; // line in file.txt
  int lineNumber = 0;
  int exitCode = -1; // check file
  string path = "";
  string nameFile = "list.txt";
  string cmd = "find " + path + " -type f -name \"*.mp3\" >> " + nameFile;

  cout << "- Input path: " << endl;
  viewPtr->cinString(path);

  cmd = "find " + path + " -type f -name \"*.mp3\" >> " + nameFile;
  exitCode = system(cmd.c_str());

  // Check command line is success ?
  if (exitCode == -1)
  {
    perror("Error executing command");
    return;
  }

  ifstream inputFile(path + "/" + nameFile);

  // Check file is open ?
  if (!inputFile.is_open())
  {
    cerr << "Failed is open the file" << endl;
    return;
  }

  // Show line in file
  while (getline(inputFile, line))
  {
    cout << line << endl;
    lineNumber++;
  }

  inputFile.close();
}

/*
 * Function: playMusic
 * Description: function run on other thread to play music
 * Input:
 *   None
 * Output:
 *   None
 */
void Controller::playMusic()
{

  Mix_Music *song = nullptr;

  // Initialize SDL
  if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) < 0)
  {
    cerr << "SDL could not initialize! SDL Error: " << SDL_GetError() << endl;
    return;
  }

  // Initialize SDL_mixer
  if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0)
  {
    cerr << "SDL_mixer could not initialize! SDL_mixer Error: "
         << Mix_GetError() << endl;
    return;
  }

  // Loop Thread
  while (1)
  {
    // Load Music
    if (loadMusic)
    {
      song = Mix_LoadMUS(musicPath.c_str());
      if (!song)
      {
        cerr << "Failed to load music! SDL_mixer Error: " << Mix_GetError()
             << endl;
        Mix_CloseAudio();
        SDL_Quit();
        return;
      }
      {
        lock_guard<mutex> lock(changedMusic);
        loadMusic = false;
      }
    }

    // Play Music
    Mix_PlayMusic(song, 0);

    // Waiting while play music
    while (Mix_PlayingMusic())
    {
      // Check event Pause-Resume
      if (isPause)
      {
        Mix_PauseMusic();
      }
      else
      {
        Mix_ResumeMusic();
      }
      // Check event play new music
      if (loadMusic)
      {
        break;
      }
      SDL_Delay(100);
    }

    // Auto next music
    while (!Mix_PlayingMusic())
    {
      {
        lock_guard<mutex> lock(changedMusic);
        ++currentPlayMusic; // Increase index
        musicPath = listPtr->getPathMediaFile(currentPlayPlaylist, currentPlayMusic);
      }
      // Check Path is avaiable ?
      if (musicPath != "")
      {
        {
          lock_guard<mutex> lock(changedMusic);
          loadMusic = true;
        }
      }
      else
      {
        cout << "Next music is empty. Play again ! " << endl;
        {
          lock_guard<mutex> lock(changedMusic);
          currentPlayMusic = 0;
          musicPath = listPtr->getPathMediaFile(currentPlayPlaylist, currentPlayMusic);
          loadMusic = true;
        }
      }
      break;
    }
    // Free song
    if (song)
    {
      Mix_FreeMusic(song);
    }
  }

  Mix_CloseAudio();
  SDL_Quit();
}

/*
 * Function: nextMusix
 * Description: next music in playlist
 * Input:
 *   None
 * Output:
 *   None
 */
void Controller::nextMusic()
{
  {
    lock_guard<mutex> lock(changedMusic);

    ++currentPlayMusic;
    musicPath = listPtr->getPathMediaFile(currentPlayPlaylist, currentPlayMusic);
  }
  if (musicPath != "")
  {
    {
      lock_guard<mutex> lock(changedMusic);

      loadMusic = true;
    }
  }
  else
  {
    cout << "Next music is empty!" << endl;
  }
}

/*
 * Function: previousMusix
 * Description: previous music in playlist
 * Input:
 *   None
 * Output:
 *   None
 */
void Controller::perviousMusic()
{
  {
    lock_guard<mutex> lock(changedMusic);

    --currentPlayMusic;
    musicPath = listPtr->getPathMediaFile(currentPlayPlaylist, currentPlayMusic);
  }
  if (musicPath != "")
  {
    {
      lock_guard<mutex> lock(changedMusic);

      loadMusic = true;
    }
  }
  else
  {
    cout << "Previous music is empty!" << endl;
  }
}

/*
 * Function: optionMusic
 * Description: select option in play music include: play, pause, next, previous
 * Input:
 *   None
 * Output:
 *   None
 */
void Controller::optionMusic()
{

  int key = 0;

  do
  {

    viewPtr->showOptionsPlayMusic();
    viewPtr->cinOption(key);

    switch (key)
    {

    case PLAY_MUSIC:
    {
      lock_guard<mutex> lock(changedMusic);

      //viewPtr->showList();
      //listPtr->getInforList();

      viewPtr->cinIndex(currentPlayPlaylist, currentPlayMusic);

      musicPath = listPtr->getPathMediaFile(currentPlayPlaylist, currentPlayMusic);

      loadMusic = true;
      isPause = false;
    }
    break;

    case PAUSE:
    {
      lock_guard<mutex> lock(changedMusic);

      isPause = true;
    }
    break;

    case RESUME:
    {
      lock_guard<mutex> lock(changedMusic);

      isPause = false;
    }
    break;

    case NEXT:
      nextMusic();
      break;

    case PREVIOUS:
      perviousMusic();
      break;

    case EXIT_PLAY:
      return;
    }

    // Create Thread one time
    if (checkThread)
    {
      thread t1(&Controller::playMusic, this);
      t1.detach();
      checkThread = false;
    }

  } while (key);
}
