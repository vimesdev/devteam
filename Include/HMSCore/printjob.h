/*
 * Copyright (C) 2017, David PHAM-VAN <dev.nfet.net@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PRINTING_PLUGIN_PRINT_JOB_H_
#define PRINTING_PLUGIN_PRINT_JOB_H_


#include <windows.h>

#include <map>
#include <memory>
#include <sstream>
#include <vector>
typedef unsigned char uint8_t; 



struct Printer {
  const std::string name;
  const std::string url;
  const std::string model;
  const std::string location;
  const std::string comment;
  const bool defaults;
  const bool available;

  Printer(std::string name,
          std::string url,
          std::string model,
          std::string location,
          std::string comment,
          bool defaults,
          bool available)
      : name(name),
        url(url),
        model(model),
        location(location),
        comment(comment),
        defaults(defaults),
        available(available) {}
};

class PrintJob {
 private:
  
  int index;
  HGLOBAL hDevMode;
  HGLOBAL hDevNames;
  HDC hDC;
  std::string documentName;

 public:
  PrintJob( int index);

  int id() { return index; }

  std::vector<Printer> listPrinters();

  bool printPdf(std::wstring name,
                std::wstring printer,
                double width,
                double height,
				LPBYTE data, 
				int size
				);

  void writeJob(LPBYTE data, int size);

  void cancelJob(std::string error);

  bool sharePdf(std::vector<uint8_t> data, std::string name);

  void pickPrinter(void* result);

  void rasterPdf(std::vector<uint8_t> data,
                 std::vector<int> pages,
                 double scale);

  std::map<std::string, bool> printingInfo();
};


#endif  // PRINTING_PLUGIN_PRINT_JOB_H_