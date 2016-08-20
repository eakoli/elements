/*=================================================================================================
   Copyright (c) 2016 Joel de Guzman

   Licensed under a Creative Commons Attribution-ShareAlike 4.0 International.
   http://creativecommons.org/licenses/by-sa/4.0/
=================================================================================================*/
#include <photon/view.hpp>
#include <photon/support/context.hpp>
#include <photon/widget/basic.hpp>

namespace photon
{
   auto w = basic(
      [](context const& ctx)
      {
         auto cnv = ctx.canvas();

         cnv.fill_color(colors::blue);
         cnv.fill_rect(rect{ 10, 10, 200, 200 });
      }
   );

   void view::draw()
   {
      w.draw(context{ *this, &w, rect{} });
   }
}