#pragma once

#include <picotorrent/ui/open_file_dialog.hpp>
#include <vector>

namespace picotorrent
{
namespace core
{
    class torrent_file;
}
namespace ui
{
    class open_torrent_dialog
        : public open_file_dialog
    {
    protected:
        bool on_file_ok();
    };
}
}
