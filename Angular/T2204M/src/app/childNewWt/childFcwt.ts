import { Component, Input } from "@angular/core";
import { ForeCastWT, List } from "../interface/FCwt";
import { HttpClient ,HttpParams} from "@angular/common/http";

@Component({
  selector:"child-fcwt",
  templateUrl:"./childprwt.html"
})
export class ChildFCWT{
  @Input()
  data!:List;

}
