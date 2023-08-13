/*
 * File: mediaFile.h
 * Author: Linh Pham
 * Date: 11/08/2023
 * Description: This is a mediaFile.h contain class MediaFile
 */
#pragma one

#include <memory>
#include <string>
#include <taglib/fileref.h>
#include <taglib/taglib.h>
#include <taglib/tag.h>

using namespace std;

class MediaFile
{
private:
  string pathMediaFile;
  TagLib::FileRef file;

public:
  MediaFile(const string &path);
  // MediaFile(const MediaFile &other);

  void setPath(const string &path);
  void setTitleMedia(const string &title);
  void setArtistMedia(const string &artist);
  void setYearPublish(const int &year);

  string getPath();
  string getTitle();
  string getArtist();
  int getYearPublish();

  bool checkFile();
  bool saveMediaFile();
};
