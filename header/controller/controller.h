/*
 * File: controller.h
 * Author: Linh Pham
 * Date: 11/08/2023
 * Description: This is a controller.h contain class Controller
 */
#pragma one

#include "../model/list.h"
#include "../view/view.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_mixer.h>
#include <cstdlib>
#include <fstream>
#include <memory>
#include <thread>
#include <mutex>

using namespace std;

enum OptionMainMenu
{
  EXIT_MENU,
  SHOW_MUSIC,
  CREATE_PLAYLIST,
  ERASE_PLAYLIST,
  SHOW_PLAYLIST,
  UPDATE_PLAYLIST,
  SHOW_MEDIAFILE,
  PLAY
};

enum OptionUpdatePlaylist
{
  EXIT_UPDATEPLAYLIST,
  INSERT_MEDIAFILE,
  ERASE_MEDIAFILE,
  UPDATE_MEDIAFILE
};

enum OptionUpdateMediaFile
{
  EXIT_UPDATEMEDIA,
  TITLE,
  ARTIST,
  YEAR
};

enum OptionPlayMusic
{
  EXIT_PLAY,
  PLAY_MUSIC,
  PAUSE,
  RESUME,
  NEXT,
  PREVIOUS
};

class Controller
{
private:
  shared_ptr<View> viewPtr; // (View::getInstanceView());
  shared_ptr<List> listPtr; // (List::getInstanceList());

  int currentPlayMusic;
  int currentPlayPlaylist; 

  //Playlist
  void createPlaylist();
  void erasePlaylist();
  void showPlaylist();
  void updatePlaylist();

  //MediaFile
  void insertMediaFile();
  void showMediaFile();
  void eraseMediaFile();
  void changeTitleMediaFile();
  void changeArtistMediaFile();
  void changeYearMediaFile();
  
  //Play Music
  void showMusicInFolder();
  void optionMusic();
  void playMusic();
  void nextMusic();
  void perviousMusic(); 

  bool checkThread;//Check Thread created

  bool isPause; //Flat Pause current Music
  bool loadMusic; //Flat load Music to Play
  string musicPath;
  mutex changedMusic;

public:
  void run();
  Controller()
      : viewPtr(View::getInstanceView()), listPtr(List::getInstanceList()),
        currentPlayMusic(0), currentPlayPlaylist(0), checkThread(true), isPause(false), loadMusic(false), musicPath("") {}
};
